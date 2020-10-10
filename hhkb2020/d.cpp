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

    l = (a + b - 1) * (N - a + 1) % mod;
    r = b * (b - 1) % mod;  // TODO
    ans -= (l - r) * (l - r) % mod;
    ans %= mod;
    if (ans < 0) ans += mod;
    cout << ans << endl;
  }
}
