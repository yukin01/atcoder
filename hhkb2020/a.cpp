#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  char s, t, ans;
  cin >> s >> t;
  if (s == 'Y') {
    ans = t - 0x20;
  } else {
    ans = t;
  }
  cout << ans << endl;
}
