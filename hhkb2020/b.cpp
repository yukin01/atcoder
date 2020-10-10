#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> vec(H);

  ll ans = 0;
  rep(i, H) cin >> vec.at(i);

  rep(i, H) rep(j, W - 1) {
    if (vec.at(i).at(j) == '.' && vec.at(i).at(j + 1) == '.') ans++;
  }

  rep(j, W) rep(i, H - 1) {
    if (vec.at(i).at(j) == '.' && vec.at(i + 1).at(j) == '.') ans++;
  }

  cout << ans << endl;
}
