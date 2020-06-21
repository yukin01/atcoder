#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll A;
  float B;
  cin >> A >> B;
  ll B100 = round(B * 100);
  ll ans = A * B100 / 100;
  cout << ans << endl;
}
