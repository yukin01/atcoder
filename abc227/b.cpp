#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  rep(i, N) cin >> S.at(i);

  vector<int> PS(1001);

  for (int a = 1; a < 1000; a++) {
    for (int b = 1; b < 1000; b++) {
      int s = 4 * a * b + 3 * a + 3 * b;
      if (s > 1000) break;
      PS.at(s) = 1;
    }
  }

  int ans = 0;
  rep(i, N) {
    if (PS.at(S.at(i)) == 0) ans++;
  }

  cout << ans << endl;
}
