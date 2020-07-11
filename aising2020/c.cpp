#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> C(10001, 0);
  rep(i, 100) rep(j, 100) rep(k, 100) {
    if (i == 0 || j == 0 || k == 0) continue;
    int n = i * i + j * j + k * k + i * j + j * k + k * i;
    if (n > 10000) continue;
    C.at(n)++;
  }
  rep(i, N) {
    cout << C.at(i + 1) << endl;
  }
}
