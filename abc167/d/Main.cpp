#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  ll K;
  cin >> N >> K;
  vector<int> A(N + 1, 0);
  rep(i, N) {
    cin >> A.at(i + 1);
  }

  vector<int> root(N + 1, 0);
  int p = 0;
  int i = 0;
  A.at(p) = 1;
  while (true) {
    i++;
    p = A.at(p);  // go next
    if (root.at(p) > 0) break;
    root.at(p) = i;  // mark
  }
  int offset = root.at(p) - 1;
  int loop = i - root.at(p);

  // K -= offset;
  // K %= roop;
  if (K > offset) {
    K = (K - offset) % loop + offset;
  }
  int ans = 1;
  rep(i, K) {
    ans = A.at(ans);
  }
  cout << ans << endl;
}
