#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  ll sum = 0;
  rep(i, N + 1) {
    if (i == 0) continue;
    if (i % 3 == 0 || i % 5 == 0) continue;
    sum += i;
  }
  cout << sum << endl;
}
