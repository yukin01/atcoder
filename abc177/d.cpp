#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> G(N + 1, 0);
  vector<set<int>> H(N + 1);
  int idx = 1;
  int ans = 1;

  int a, b;
  rep(i, M) {
    cin >> a >> b;
    if (G.at(a) == 0 && G.at(b) == 0) {
      G.at(a) = idx;
      G.at(b) = idx;
      H.at(idx).insert(a);
      H.at(idx).insert(b);
      ans = max(ans, 2);
      idx++;
      continue;
    }

    if (G.at(a) == 0 && G.at(b) != 0) {
      G.at(a) = G.at(b);
      H.at(G.at(b)).insert(a);
      ans = max(ans, (int)H.at(G.at(b)).size());
      continue;
    }

    if (G.at(a) != 0 && G.at(b) == 0) {
      G.at(b) = G.at(a);
      H.at(G.at(a)).insert(b);
      ans = max(ans, (int)H.at(G.at(a)).size());
      continue;
    }

    // a 側に揃える
    if (G.at(a) == G.at(b)) continue;
    for (auto tmp : H.at(G.at(b))) {
      G.at(tmp) = G.at(a);
    }
    H.at(G.at(a)).merge(H.at(G.at(b)));
    ans = max(ans, (int)H.at(G.at(a)).size());
  }

  cout << ans << endl;
}
