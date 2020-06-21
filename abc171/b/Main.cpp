#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> P(N);
  rep(i, N) {
    cin >> P.at(i);
  }
  sort(P.begin(), P.end());
  int min = 0;
  rep(i, K) {
    min += P.at(i);
  }

  cout << min << endl;
}
