#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A.at(i);

  // sort(A.begin(), A.end(), greater<int>());
  // vector<int> P(2, A.at(0));

  // int ans = 0;
  // int d = 0;
  // rep(i, N) {
  //   if (i == 0) continue;
  //   int l = P.at(d);
  //   int r = P.at(d + 1);
  //   ans += min(l, r);
  //   d = d + 1;

  //   P.insert(P.begin() + d, A.at(i));
  // }
  sort(A.begin(), A.end());
  int ans = 0;
  rep(i, N) {
    if (i == 0) continue;
    int j = (N - 1) - i / 2;
    ans += A.at(j);
  }

  cout << ans << endl;
}
