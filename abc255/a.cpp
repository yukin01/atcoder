#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int r, c;
  cin >> r >> c;

  rep(i, 4) {
    int a;
    cin >> a;
    if (i + 1 == (r - 1) * 2 + c) {
      cout << a << endl;
    }
  }
}
