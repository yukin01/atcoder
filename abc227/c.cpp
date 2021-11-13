#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N;
  cin >> N;
  ll ans = 0;
  ll s2 = sqrt(N);
  ll s3 = pow(N, 1.0 / 3.0);

  for (ll i = 1; i <= s3; i++) {
    for (ll j = i; j <= s2; j++) {
      ll k = N / (i * j);
      if (k < j) break;
      ans += k - j + 1;
    }
  }

  cout << ans << endl;
}
