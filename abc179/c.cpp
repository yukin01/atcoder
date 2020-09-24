#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  ll ans = 0;
  for (int a = 1; a * a < N; a++)
    for (int b = a; a * b < N; b++) {
      if (a != b) ans++;
      ans++;
    }
  cout << ans << endl;
}
