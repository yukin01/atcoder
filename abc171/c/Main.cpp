#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N;
  cin >> N;
  string ans = "";
  while (true) {
    ll q = N / 26;
    ll r = N % 26;
    ans += (char)(r + 96);  // 1-26 to a-z
    if (q == 0) break;
    N = q;
  }

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}

// 0
// 26
// 702
// 18278
// 475254
// 12356630
// 321272406
// 8353082582
// 217180147158
// 5646683826134
// 146813779479510
