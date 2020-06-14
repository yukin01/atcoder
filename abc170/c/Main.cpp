#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int X, N;
  cin >> X >> N;

  if (N == 0) {
    cout << X << endl;
    return 0;
  }

  vector<int> P(N);
  rep(i, N) {
    cin >> P.at(i);
  }
  set<int> PS(P.begin(), P.end());

  int x = -1;
  rep(i, 100) {
    if (!PS.count(X - i)) {
      x = X - i;
      break;
    }

    if (!PS.count(X + i)) {
      x = X + i;
      break;
    }
  }
  cout << x << endl;
  // for (auto value : PS) {
  //   cout << value << endl;
  // }
}
