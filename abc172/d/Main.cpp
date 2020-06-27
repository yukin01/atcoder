#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

vector<ll> F(10000001, 0);

ll prime_count(ll N, ll n, ll now) {
  if (F.at(n) > 0) {
    F.at(N) = F.at(n) * now;
  }
  for (ll a = 2; a * a <= n; a++) {
    if (n % a != 0) continue;
    ll ex = 0;
    while (n % a == 0) {
      ex++;
      n /= a;
    }
    return prime_count(N, n, now * (ex + 1));
  }
  if (n != 1) {
    F.at(N) = now * 2;
    return now * 2;
  }
  F.at(N) = now;
  return now;
}

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  for (ll K = 1; K <= N; K++) {
    ll fk = prime_count(K, K, 1);
    ans += K * fk;
  }
  cout << ans << endl;
}
