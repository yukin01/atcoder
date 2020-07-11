#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int a, N;
  cin >> N;
  int cnt = 0;
  rep(i, N) {
    cin >> a;
    if ((i + 1) % 2 == 0) continue;
    if (a % 2 == 0) continue;
    cnt++;
  }
  cout << cnt << endl;
}
