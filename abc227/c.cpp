#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N;
  cin >> N;
  ll ans = 0;

  for (ll a = 1; a * a * a <= N; a++) {
    for (ll b = a; a * b * b <= N; b++) {
      ll c = N / (a * b);
      ans += c - b + 1;
    }
  }

  cout << ans << endl;
}
