#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int H, W, K;
  cin >> H >> W >> K;
  // vector<vector<char>> C(H, vector<char>(W));

  // int sum = 0;
  // rep(i, H) {
  //   rep(j, W) {
  //     char c;
  //     cin >> c;
  //     if (c == '#') sum++;
  //     C.at(i).at(j) = c;
  //   }
  // }

  // int ans = 0;
  // for (int hi = 0; hi < (1 << H); hi++) {
  //   bitset<6> h(hi);
  //   string debug_h = h.to_string();
  //   int tmp_sum = sum;
  //   auto CC = C;

  //   rep(i, H) {
  //     if (h.test(i)) {
  //       rep(jj, W) {
  //         if (CC.at(i).at(jj) == '#') {
  //           tmp_sum--;
  //           CC.at(i).at(jj) = '.';
  //         }
  //       }
  //     }
  //   }

  //   if (tmp_sum < K) continue;

  //   for (int wj = 0; wj < (1 << W); wj++) {
  //     bitset<6> w(wj);
  //     string debug_w = w.to_string();
  //     int tmp_tmp_sum = tmp_sum;

  //     rep(j, W) {
  //       if (w.test(j)) {
  //         rep(ii, H) {
  //           if (CC.at(ii).at(j) == '#') {
  //             tmp_tmp_sum--;
  //             // CC.at(ii).at(j) = '.';
  //           }
  //         }
  //       }
  //     }

  //     if (tmp_tmp_sum == K) {
  //       ans++;
  //     }
  //   }
  // }
  vector<string> s(H);
  rep(i, H) cin >> s.at(i);

  int ans = 0;
  rep(ib, 1 << H) rep(jb, 1 << W) {
    int cnt = 0;
    rep(i, H) {
      if (ib >> i & 1) continue;  // 赤く塗る場合スキップ
      rep(j, W) {
        if (jb >> j & 1) continue;
        if (s.at(i).at(j) == '#') cnt++;
      }
    }
    if (cnt == K) ans++;
  }

  cout << ans << endl;
}
