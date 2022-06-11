#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll X, A, D, N;
  cin >> X >> A >> D >> N;
  if (D < 0) {
    A = A + (N - 1) * D;
    D = -D;
  }

  ll le = 0, ri = N - 1;
  while (ri - le > 1) {
    ll mi = (le + ri) / 2;
    if (X < A + mi * D)
      ri = mi;
    else
      le = mi;
  }

  ll ans = min(abs(A + le * D - X), abs(A + ri * D - X));
  cout << ans << endl;
}
