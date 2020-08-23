#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int H, W, a, b;
  cin >> H >> W >> a >> b;
  int ch = rand() % H;
  int cw = rand() % W;
  int dh = rand() % H;
  int dw = rand() % W;
  cout << H << ' ' << W << endl;
  cout << ch + 1 << ' ' << cw + 1 << endl;
  cout << dh + 1 << ' ' << dw + 1 << endl;
  rep(i, H) rep(j, W) {
    char c;
    if (i == ch && j == cw || i == dh && j == dw) {
      c = '.';
    } else {
      c = rand() % (a + b) < a ? '#' : '.';
    }
    cout << c;
    if (j == W - 1) cout << endl;
  }
}
