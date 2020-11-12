#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int b = 4;

  for (int tmp = 0; tmp < (1 << 4); tmp++) {
    bitset<4> s(tmp);
    int x = 0;
    int y = 0;
    if (s.test(0))
      x += A;
    else
      y += A;

    if (s.test(1))
      x += B;
    else
      y += B;

    if (s.test(2))
      x += C;
    else
      y += C;

    if (s.test(3))
      x += D;
    else
      y += D;

    if (x == y) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
