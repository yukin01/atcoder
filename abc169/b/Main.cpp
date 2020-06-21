#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  const ll max = pow(10, 18);

  ll ans = 1;
  rep(i, N) {
    ll a;
    cin >> a;
    if (a == 0) {
      ans = 0;
      break;
    }
    if (ans == -1) continue;
    if (a > max / ans) {
      ans = -1;
      continue;
    }
    ans *= a;
  }

  cout << ans << endl;
}
