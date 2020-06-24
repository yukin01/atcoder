#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  vector<vector<int>> books(N, vector<int>(M + 1, 0));
  rep(i, N) {
    rep(j, M + 1) {
      cin >> books.at(i).at(j);
    }
  }

  // rep(i, N) {
  //   rep(j, M + 1) {
  //     cout << books.at(i).at(j);
  //     if (j = M) {
  //       cout << endl;
  //     } else {
  //       cout << " ";
  //     }
  //   }
  // }
}
