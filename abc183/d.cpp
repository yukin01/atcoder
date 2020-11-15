#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N, W, s, t, p;
  cin >> N >> W;

  vector<ll> D(200001, 0);
  rep(i, N) {
    cin >> s >> t >> p;
    D.at(s) += p;
    D.at(t) -= p;
  }

  ll l = 0;
  for (auto d : D) {
    l += d;
    if (l > W) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
