#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N, K;
  cin >> N >> K;
  N %= K;
  cout << min(N, K - N) << endl;
}
