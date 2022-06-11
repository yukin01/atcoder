#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(K);
  rep(i, K) {
    cin >> A.at(i);
    A.at(i)--;
  }

  vector<ll> x(N), y(N);
  rep(i, N) cin >> x.at(i) >> y.at(i);

  ll ans = 0;
  int cur = 0;
  rep(i, N) {
    if (cur < K && i == A.at(cur)) {
      cur++;
      continue;
    }

    ll c_ans = LONG_LONG_MAX;
    rep(k, K) {
      ll dx = x.at(i) - x.at(A.at(k));
      ll dy = y.at(i) - y.at(A.at(k));
      c_ans = min(c_ans, dx * dx + dy * dy);
    }
    ans = max(ans, c_ans);
  }

  cout << fixed << setprecision(6) << sqrt(ans) << endl;
}
