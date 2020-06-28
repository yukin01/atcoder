#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int D;
  cin >> D;

  vector<int> C(26);  // 0 to 25
  rep(i, 26) {
    cin >> C.at(i);
  }

  vector<vector<int>> S(D, vector<int>(26));  // 0 to 364, 0 to 25
  rep(i, D) {
    rep(j, 26) {
      cin >> S.at(i).at(j);
    }
  }

  vector<int> T(D);       // 0 to 364
  vector<int> L(26, -1);  // 0 to 25
  rep(i, D) {
    int maxplus = -1;
    int t = -1;
    rep(j, 26) {
      int plus = C.at(j) * (i - L.at(j)) + S.at(i).at(j);
      if (plus > maxplus) {
        t = j;
        maxplus = plus;
      }
    }
    L.at(t) = i;
    T.at(i) = t;
    // todo
  }

  rep(i, D) {
    cout << T.at(i) + 1 << endl;
  }
}
