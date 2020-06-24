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

  // Exhaustive Search
  int ans = -1;
  for (int tmp = 0; tmp < (1 << N); tmp++) {
    bitset<12> cart(tmp);  // 0: don't buy, 1: buy
    vector<int> sum(M + 1, 0);

    rep(i, N) {
      if (cart.test(i)) continue;
      rep(j, M + 1) {
        sum.at(j) += books.at(i).at(j);
      }
    }

    bool flag = true;
    rep(j, M + 1) {
      if (j == 0) continue;
      if (sum.at(j) < X) {
        flag = false;
        break;
      }
    }
    if (!flag) continue;

    if (ans < 0)
      ans = sum.at(0);
    else
      ans = min(ans, sum.at(0));
  }
  cout << ans << endl;
}
