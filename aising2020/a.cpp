#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int l, r, d;
  cin >> l >> r >> d;
  int cnt = 0;
  for (int i = l; i <= r; i++) {
    if (i % d == 0) cnt++;
  }
  cout << cnt << endl;
}
