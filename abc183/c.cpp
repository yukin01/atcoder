#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Status = tuple<int, int, vector<int>, int>;  // n, k, r, c

int main() {
  int N, K;
  cin >> N >> K;

  vector<vector<int>> T(N, vector<int>(N, 0));
  rep(i, N) rep(j, N) cin >> T.at(i).at(j);

  stack<Status> S;
  S.push({0, 0, vector<int>(N, 1), N});
  int ans = 0;
  while (!S.empty()) {
    auto s = S.top();
    S.pop();
    auto n = get<0>(s);
    auto k = get<1>(s);
    auto r = get<2>(s);
    auto c = get<3>(s);

    if (k > K) continue;
    if (c == 1 && k + T.at(n).at(0) == K) {
      ans++;
      continue;
    }

    rep(i, N) {
      if (r.at(i) == 0 || i == 0) continue;
      auto new_r = r;
      new_r.at(i) = 0;
      S.push({i, k + T.at(n).at(i), new_r, c - 1});
    }
  }

  cout << ans << endl;
}
