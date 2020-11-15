#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N, x;
  cin >> N;
  ll ma, eu2, ch;
  ma = eu2 = ch = 0;
  rep(i, N) {
    cin >> x;
    x = abs(x);
    ma += x;
    eu2 += x * x;
    ch = max(ch, x);
  }
  double eu = sqrt(eu2);
  cout << fixed << setprecision(20);
  cout << ma << endl;
  cout << eu << endl;
  cout << ch << endl;
}
