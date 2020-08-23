#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int cnt = 0;
int H, W;

void paint(vector<string>& v, int i, int j) {
  queue<P> que;
  que.push(P(i, j));

  while (!que.empty()) {
    auto p = que.front();
    que.pop();
    v.at(p.first).at(p.second) = cnt + '0';
    if (p.first < H - 1 && v.at(p.first + 1).at(p.second) == '.')
      que.push(P(p.first + 1, p.second));
    if (p.second < W - 1 && v.at(p.first).at(p.second + 1) == '.')
      que.push(P(p.first, p.second + 1));
    if (p.first > 0 && v.at(p.first - 1).at(p.second) == '.')
      que.push(P(p.first - 1, p.second));
    if (p.second > 0 && v.at(p.first).at(p.second - 1) == '.')
      que.push(P(p.first, p.second - 1));
  }

  cnt++;
}

void find(vector<string>& s, vector<set<int>>& v, int i, int j) {
  char c = s.at(i).at(j);
  for (int k = max(0, i - 2); k <= min(H - 1, i + 2); k++)
    for (int l = max(0, j - 2); l <= min(W - 1, j + 2); l++) {
      char tmp = s.at(k).at(l);
      if (tmp != c && tmp != '#') v.at(c - '0').insert(tmp - '0');
    }
}

int main() {
  int ch, dh, cw, dw;
  cin >> H >> W >> ch >> cw >> dh >> dw;
  vector<string> S(H);
  rep(i, H) cin >> S.at(i);
  // int ans = -1;

  rep(i, H) rep(j, W) {
    if (S.at(i).at(j) == '.') paint(S, i, j);
  }

  vector<set<int>> V(cnt);
  rep(i, H) rep(j, W) {
    if (S.at(i).at(j) != '#') find(S, V, i, j);
  }

  int C = S.at(ch - 1).at(cw - 1) - '0';
  int D = S.at(dh - 1).at(dw - 1) - '0';

  vector<int> L(cnt, -1);
  int ans = 0;
  queue<int> q;
  q.push(C);
  L.at(C) = ans;
  while (!q.empty()) {
    int n = q.front();
    q.pop();
    set<int> st = V.at(n);
    for (auto itr = st.begin(); itr != st.end(); ++itr) {
      if (L.at(*itr) < 0) {
        L.at(*itr) = ans + 1;
        q.push(*itr);
      }
    }
    ans++;
  }
  cout << L.at(D) << endl;
}
