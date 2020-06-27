#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N;
  cin >> N;
  ll ans = 0;

  // NlogN + N 798 ms
  // vector<int> F(N + 1, 0);
  // for (ll i = 1; i <= N; i++) {
  //   ll j = 1;
  //   while (i * j <= N) {
  //     F.at(i * j)++;
  //     j++;
  //   }
  // }
  // for (ll i = 1; i <= N; i++) {
  //   ans += i * F.at(i);
  // }

  // NlogN 69 ms
  // for (ll i = 1; i <= N; i++) {
  //   ll j = 1;
  //   while (i * j <= N) {
  //     ans += i * j;
  //     j++;
  //   }
  // }

  // N 96 ms
  for (ll i = 1; i <= N; i++) {
    ll n = (N / i);
    ans += i * n * (n + 1) / 2;
  }

  cout << ans << endl;
}
