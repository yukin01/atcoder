#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k, a;
  cin >> n >> k >> a;
  int ans;
  ans = (a + k - 1) % n;
  if (ans == 0) ans = n;
  cout << ans << endl;
}
