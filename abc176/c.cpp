#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, a;
  cin >> N;
  int max = 0;
  ll ans = 0;
  rep(i, N) {
    cin >> a;
    if (a > max) {
      max = a;
      continue;
    }
    ans += max - a;
  };
  cout << ans << endl;
}
