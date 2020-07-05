#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  int ans = N % 1000;
  if (ans != 0) ans = 1000 - ans;
  cout << ans << endl;
}
