#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll mod = 1000000007;

int main() {
  ll T, N, A, B;
  ll a, b, ans;
  cin >> T;
  ll l, r;

  rep(i, T) {
    cin >> N >> A >> B;
    a = max(A, B);
    b = min(A, B);
    l = (N - a + 1) * (N - a + 1) % mod;
    r = (N - b + 1) * (N - b + 1) % mod;
    ans = l * r % mod;

    l = (N - b + 1) * (N - a + 1) % mod;
    ll x = N - a - b;
    if (x >= 0) {
      r = (x + 1) * (x + 2) % mod;
    } else {
      r = 0;
    }
    ans -= (l - r) * (l - r) % mod;
    ans %= mod;
    if (ans < 0) ans += mod;
    cout << ans << endl;
  }
}
