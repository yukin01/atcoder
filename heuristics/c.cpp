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

  vector<int> T(D);                               // 0 to 364
  vector<vector<int>> L(26, vector<int>(1, -1));  // 0 to 25

  int ans = 0;
  rep(d, D) {  // 0 to 364
    int t;
    cin >> t;
    t--;  // 0 to 25
    L.at(t).push_back(d);
    T.at(d) = t;

    ans += S.at(d).at(t);
    rep(i, 26) {
      ans -= C.at(i) * (d - L.at(i).back());
    }
    // cout << ans << endl;
  }

  rep(i, 26) L.at(i).push_back(D);

  int M;
  cin >> M;
  rep(i, M) {
    int d, q;
    cin >> d >> q;
    d--;
    q--;
    auto& from = L.at(T.at(d));
    auto& to = L.at(q);
    auto itrfrom = lower_bound(from.begin(), from.end(), d);
    auto itrto = lower_bound(to.begin(), to.end(), d);
    int ifrom = itrfrom - from.begin();
    int ito = itrto - to.begin();

    int l1 = d - from.at(ifrom - 1);
    int l2 = from.at(ifrom + 1) - d;
    int l3 = d - to.at(ito - 1);
    int l4 = to.at(ifrom) - d;

    ans -= C.at(T.at(d)) * l1 * l2;
    ans -= S.at(d).at(T.at(d));
    ans += C.at(q) * l3 * l4;
    ans += S.at(d).at(q);

    T.at(d) = q;
    from.erase(itrfrom);
    to.insert(itrto, d);

    cout << ans << endl;
  }
}
