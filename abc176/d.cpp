#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;

int main() {
  int H, W, ch, dh, cw, dw;
  cin >> H >> W >> ch >> cw >> dh >> dw;
  vector<vector<int>> S(H, vector<int>(W));
  char c;
  rep(i, H) rep(j, W) {
    cin >> c;
    S.at(i).at(j) = c == '.' ? -1 : -2;
  }

  deque<T> dq;
  dq.push_front(T(ch - 1, cw - 1, 0));

  int i, j, cost;
  while (!dq.empty()) {
    auto tp = dq.front();
    tie(i, j, cost) = tp;
    dq.pop_front();
    if (S.at(i).at(j) != -1) continue;

    S.at(i).at(j) = cost;
    if (i < H - 1 && S.at(i + 1).at(j) == -1) dq.push_front(T(i + 1, j, cost));
    if (j < W - 1 && S.at(i).at(j + 1) == -1) dq.push_front(T(i, j + 1, cost));
    if (i > 0 && S.at(i - 1).at(j) == -1) dq.push_front(T(i - 1, j, cost));
    if (j > 0 && S.at(i).at(j - 1) == -1) dq.push_front(T(i, j - 1, cost));

    for (int k = max(0, i - 2); k <= min(H - 1, i + 2); k++)
      for (int l = max(0, j - 2); l <= min(W - 1, j + 2); l++)
        if (S.at(k).at(l) == -1) dq.push_back(T(k, l, cost + 1));
  }

  cout << S.at(dh - 1).at(dw - 1) << endl;
}
