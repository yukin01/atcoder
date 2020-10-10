#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, p;
  cin >> N;
  int ans = 0;
  vector<int> dist(200001, 0);
  rep(i, N) {
    cin >> p;
    dist.at(p) = 1;
    while (dist.at(ans) == 1) {
      ans++;
    }
    cout << ans << endl;
  }
}
