#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N, D;
  cin >> N >> D;
  int ans = 0;
  ll x, y;
  rep(i, N) {
    cin >> x >> y;
    if (x * x + y * y <= D * D) ans++;
  }
  cout << ans << endl;
}
