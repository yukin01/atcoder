#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll X;
  cin >> X;

  ll x = 100;
  ll ans = 0;
  while (x < X) {
    x += x / 100;
    ans++;
  }

  cout << ans << endl;
}
