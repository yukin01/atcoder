#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll X, Y, A, B;
  cin >> X >> Y >> A >> B;

  ll ans = 0;
  ll r = B / (A - 1);
  while (X * A < Y && X < r) {
    X *= A;
    ans++;
  }
  ans += (Y - X - 1) / B;
  cout << ans << endl;
}
