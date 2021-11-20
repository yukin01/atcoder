#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N + 1), B(N + 1, 0);
  rep(i, N) cin >> A.at(i + 1);

  int ans = 0;
  while (B.at(X) == 0) {
    B.at(X) = 1;
    ans++;
    X = A.at(X);
  }

  cout << ans << endl;
}
