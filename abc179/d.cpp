#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int mod = 998244353;

int main() {
  int N, K, L, R;
  cin >> N >> K;
  vector<int> S;
  rep(i, K) {
    cin >> L >> R;
    for (int j = L; j <= R; j++) S.push_back(j);
  }
  sort(S.begin(), S.end());

  vector<int> T(N, 0);
  int now = N - 1;
  while (now > 0) {
    for (auto s : S) {
      if (now + s > N) break;
      if (now + s == N) {
        T.at(now)++;
        T.at(now) %= mod;
      } else {
        T.at(now) += T.at(now + s);
        T.at(now) %= mod;
      }
    }
    now--;
  }
  cout << T.at(1) << endl;
}
