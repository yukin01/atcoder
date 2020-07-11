#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  string X;
  cin >> N >> X;
  bitset<200000> x(X);

  int popcount = x.count();
  int hp = popcount + 1;
  int lp = max((int)(popcount - 1), 1);  // RE 対策
  int hr = 0;
  int lr = 0;
  vector<int> H(N, (1 % hp));  // pow(2,i) を hp で割った余り
  vector<int> L(N, (1 % lp));
  rep(i, N) {
    if (i != 0) {
      H.at(i) = H.at(i - 1) * 2 % hp;
      L.at(i) = L.at(i - 1) * 2 % lp;
    }
    if (!x.test(i)) continue;
    hr += H.at(i);
    hr %= hp;
    lr += L.at(i);
    lr %= lp;
  }

  rep(i, N) {
    int p = popcount + (x.test(N - 1 - i) ? -1 : 1);
    if (p == 0) {
      cout << 0 << endl;
      continue;
    }

    int r = 0;
    if (p == hp) {
      r = hr;
      r += H.at(N - 1 - i);
    } else if (p == lp) {
      r = lr;
      r -= L.at(N - 1 - i);
      if (r < 0) r += p;
    }
    r %= p;

    int ans = 1;
    while (r != 0) {
      r %= bitset<20>(r).count();
      // r %= __builtin_popcount(r);
      ans++;
    }
    cout << ans << endl;
  }
}
