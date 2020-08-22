#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string S;
  cin >> S;
  int ans = 1;
  if (S == "RRR") {
    ans = 3;
  }
  if (S == "SRR" || S == "RRS") {
    ans = 2;
  }
  if (S == "SSS") {
    ans = 0;
  }
  cout << ans << endl;
}
