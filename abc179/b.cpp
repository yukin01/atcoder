#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  int d1, d2;
  int tmp = 0;
  int cnt = 0;
  rep(i, N) {
    cin >> d1 >> d2;
    if (d1 == d2) {
      tmp++;
    } else {
      cnt = max(cnt, tmp);
      tmp = 0;
    }
  }
  cnt = max(cnt, tmp);
  string ans = cnt < 3 ? "No" : "Yes";
  cout << ans << endl;
}
