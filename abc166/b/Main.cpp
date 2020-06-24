#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<bool> list(N, true);
  rep(i, K) {
    int d, a;
    cin >> d;
    rep(j, d) {
      cin >> a;
      list.at(a - 1) = false;
    }
  }

  int ans = 0;
  for (auto flag : list) {
    if (flag) ans++;
  }
  cout << ans << endl;
}
