#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll k;
  cin >> k;
  if (k % 2 == 0) {
    cout << -1 << endl;
    return 0;
  }
  ll a = 7;
  int ans = 1;
  vector<bool> v(1000000, false);
  while (true) {
    a = a % k;
    if (a == 0) break;
    if (v.at(a)) {
      ans = -1;
      break;
    }
    v.at(a) = true;
    a = a * 10 + 7;
    ans++;
  }
  cout << ans << endl;
}
