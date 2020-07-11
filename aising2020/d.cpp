#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using Bint = boost::multiprecision::cpp_int;
namespace mp = boost::multiprecision;

int main() {
  int N;
  string X;
  cin >> N >> X;
  bitset<200000> x(X);
  rep(i, N) {
    bitset n = x;
    n.flip(N - 1 - i);

    if (n == 0) {
      cout << 0 << endl;
      continue;
    }

    Bint p(n.count());
    Bint tmp = 0;
    rep(i, N) {
      if (!n.test(i)) continue;
      tmp += mp::pow(Bint(2), i) % p;
      tmp %= p;
    }

    n = bitset<200000>((int)tmp);
    ll ans = 1;
    while (n != 0) {
      ll r = n.to_ullong() % n.count();
      n = bitset<200000>(r);
      ans++;
    }
    cout << ans << endl;
  }
}
