#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N = 1 << 20, Q, t, h;
  ll x;
  cin >> Q;

  vector<ll> A(N, -1);

  set<ll> S;
  rep(i, N) S.insert(i);

  rep(i, Q) {
    cin >> t >> x;
    if (t == 1) {
      h = *S.lower_bound(x % N);

      A.at(h) = x;
      S.erase(h);
    } else {
      cout << A.at(x % N) << endl;
    }
  }
}
