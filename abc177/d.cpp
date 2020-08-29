#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;

  vector<set<int>> G(N + 1);
  int a, b;
  rep(i, M) {
    cin >> a >> b;
    G.at(a).insert(b);
    G.at(b).insert(a);
  }
  vector<int> H(N + 1, 0);
  int ans = 1;

  rep(i, N + 1) {
    if (i == 0 || H.at(i) != 0) continue;
    queue<int> que;
    que.push(i);

    int cnt = 0;
    while (!que.empty()) {
      auto q = que.front();
      que.pop();
      if (H.at(q) != 0) continue;
      H.at(q) = 1;
      cnt++;
      for (auto g : G.at(q)) {
        if (H.at(g) == 0) que.push(g);
      }
    }
    ans = max(ans, cnt);
  }

  cout << ans << endl;
}
