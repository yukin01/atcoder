#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> H(N + 1);
  rep(i, N) {
    cin >> H.at(i + 1);
  }
  Graph graph(N + 1, vector<int>(0));
  int a, b;
  rep(i, M) {
    cin >> a >> b;
    graph.at(a).push_back(b);
    graph.at(b).push_back(a);
  }
  vector<bool> list(N + 1, true);

  rep(i, N + 1) {
    if (i == 0) continue;
    if (!list.at(i)) continue;
    auto g = graph.at(i);
    int baseH = H.at(i);
    for (auto j : g) {
      int headH = H.at(j);
      if (headH > baseH) {
        list.at(i) = false;
      }
      if (headH < baseH) {
        list.at(j) = false;
      }
      if (headH == baseH) {
        list.at(i) = false;
        list.at(j) = false;
      }
    }
  }

  int ans = -1;
  for (auto l : list) {
    if (l) ans++;
  }
  cout << ans << endl;
}
