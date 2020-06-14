#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int X, Y;
  cin >> X >> Y;
  int d1 = Y - 2 * X;
  // int d2 = 4 * X - Y;
  if (d1 >= 0 && d1 <= 2 * X && d1 % 2 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
