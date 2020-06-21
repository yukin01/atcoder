#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

vector<pair<ll, ll>> prime_factorize(ll N) {
  vector<pair<ll, ll>> res;
  for (ll a = 2; a * a <= N; a++) {
    if (N % a != 0) continue;
    ll ex = 0;
    while (N % a == 0) {
      ++ex;
      N /= a;
    }
    res.push_back({a, ex});
  }
  if (N != 1) res.push_back({N, 1});
  return res;
}

int main() {
  ll N;
  cin >> N;
  if (N == 1) {
    cout << 0 << endl;
    return 0;
  }
  auto vec = prime_factorize(N);
  int ans = 0;
  for (auto p : vec) {
    int n = 0;
    int sum = 1;  // sum = 1 + 2 + ...
    while (sum <= p.second) {
      n++;
      sum += n + 1;
    }
    ans += n;
  }
  cout << ans << endl;
}
