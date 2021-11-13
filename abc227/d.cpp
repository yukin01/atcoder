#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A.at(i);
  sort(A.begin(), A.end(), greater<int>());

  int ans = 0;
  while (true) {
    rep(i, K) {
      if (A.at(i) == 0) {
        cout << ans << endl;
        return 0;
      }
      A.at(i)--;
    }
    ans++;
    sort(A.begin(), A.end(), greater<int>());
  }
}
