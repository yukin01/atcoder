#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  double A, B, H, M;
  cin >> A >> B >> H >> M;

  cout << fixed << setprecision(12);

  double angle = (60 * H - 11 * M) / 360 * M_PI;
  double c_2 = A * A + B * B - 2 * A * B * cos(angle);
  double c = sqrt(c_2);
  cout << c << endl;
}
