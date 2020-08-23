#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int H, W, ch, dh, cw, dw;
  cin >> H >> W >> ch >> cw >> dh >> dw;
  vector<string> S(H);
  rep(i, H) cin >> S.at(i);

  queue<tuple<int, int, int>> que;

  que.push(make_tuple(ch - 1, cw - 1, 0));

  int i, j, cost;
  while (!que.empty()) {
    auto tp = que.front();
    tie(i, j, cost) = tp;
    que.pop();

    queue<P> paint, find;
    if (S.at(i).at(j) == '.') paint.push(P(i, j));

    while (!paint.empty()) {
      auto p = paint.front();
      paint.pop();
      find.push(p);
      if (S.at(p.first).at(p.second) == '.')
        S.at(p.first).at(p.second) = cost + '0';
      if (p.first < H - 1 && S.at(p.first + 1).at(p.second) == '.')
        paint.push(P(p.first + 1, p.second));
      if (p.second < W - 1 && S.at(p.first).at(p.second + 1) == '.')
        paint.push(P(p.first, p.second + 1));
      if (p.first > 0 && S.at(p.first - 1).at(p.second) == '.')
        paint.push(P(p.first - 1, p.second));
      if (p.second > 0 && S.at(p.first).at(p.second - 1) == '.')
        paint.push(P(p.first, p.second - 1));
    }

    while (!find.empty()) {
      auto p = find.front();
      find.pop();
      for (int k = max(0, p.first - 2); k <= min(H - 1, p.first + 2); k++)
        for (int l = max(0, p.second - 2); l <= min(W - 1, p.second + 2); l++)
          if (S.at(k).at(l) == '.') que.push(make_tuple(k, l, cost + 1));
    }
  }

  int ans = -1;
  char goal = S.at(dh - 1).at(dw - 1);
  if (goal != '.') ans = goal - '0';
  cout << ans << endl;
}
