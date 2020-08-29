#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string S, T;
  cin >> S >> T;
  int ans = 1001;
  rep(i, S.size() - T.size() + 1) {
    int cnt = 0;
    rep(j, T.size()) {
      if (S.at(i + j) != T.at(j)) cnt++;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
}
