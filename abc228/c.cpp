#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> P(N);
  vector<int> Rank(N);
  int a, b, c;
  rep(i, N) {
    cin >> a >> b >> c;
    P.at(i) = a + b + c;
  }

  copy(P.begin(), P.end(), Rank.begin());
  sort(Rank.begin(), Rank.end(), greater<int>());

  int border = Rank.at(K - 1);
  string ans;
  rep(i, N) {
    ans = (P.at(i) + 300) >= border ? "Yes" : "No";
    cout << ans << endl;
  }
}
