#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Tuple = tuple<int, int, int, string>;

int main() {
  int N;
  string C;
  cin >> N >> C;
  int cnt = 0;
  rep(i, N) {
    if (C.at(i) == 'R') cnt++;
  }

  int ans = 0;
  for (int i = cnt; i < N; i++) {
    if (C.at(i) == 'R') ans++;
  }

  cout << ans << endl;
}
