#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  rep(i, N) cin >> A.at(i);
  ll ok = -1;
  // (全社員の最大値) = 2e5 * 1e12
  // (プロジェクトの最大値) = (全社員の最大値) / (プロジェクトあたりの人数)
  // ng > 2e17 / K
  ll ng = 1e18 / K;

  while (ok + 1 < ng) {
    ll md = (ok + ng) / 2;
    ll sum = 0;
    rep(i, N) {
      sum += min(md, A.at(i));
    }
    if (K * md > sum) {
      ng = md;
    } else {
      ok = md;
    }
  }
  cout << ok << endl;
}
