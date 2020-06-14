#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int x = 0;
  rep(i, 5) {
    cin >> x;
    if (x == 0) {
      cout << i + 1 << endl;
      break;
    }
  }
}
