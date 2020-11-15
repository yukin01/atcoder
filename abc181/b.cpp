#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  ll A, B;
  ll ans = 0;
  rep(i, N) {
    cin >> A >> B;
    ans += (A + B) * (B - A + 1) / 2;
  }
  cout << ans << endl;
}
