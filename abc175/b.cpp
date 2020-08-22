#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  rep(i, N) cin >> L.at(i);

  int ans = 0;
  if (N < 3) {
    cout << ans << endl;
    return 0;
  }
  sort(L.begin(), L.end());

  int a, b, c;
  rep(i, N - 2) {
    a = L.at(i);
    for (int j = i + 1; j < N - 1; j++) {
      b = L.at(j);
      if (a == b) continue;
      for (int k = j + 1; k < N; k++) {
        c = L.at(k);
        if (a == c || b == c) continue;
        if (a + b <= c) break;
        ans++;
      }
    }
  }

  cout << ans << endl;
}
