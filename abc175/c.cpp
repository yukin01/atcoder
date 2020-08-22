#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll x, k, d;
  cin >> x >> k >> d;

  ll l = -x / d;
  ll ans;
  if (l < -k) {
    ans = abs(x - k * d);
  } else if (l > k) {
    ans = abs(x + k * d);
  } else {
    if (k % 2 == abs(l) % 2) {
      ll tmp = min(abs(x + (l - 2) * d), abs(x + (l + 2) * d));
      ans = min(abs(x + l * d), tmp);
    } else {
      ans = min(abs(x + (l + 1) * d), abs(x + (l - 1) * d));
    }
  }

  cout << ans << endl;
}
