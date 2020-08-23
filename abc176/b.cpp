#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int ctoi(const char c) {
  if ('0' <= c && c <= '9') return (c - '0');
  return -1;
}

int main() {
  string N;
  cin >> N;
  ll sum = 0;
  rep(i, N.size()) sum += ctoi(N.at(i));
  string ans = sum % 9 == 0 ? "Yes" : "No";
  cout << ans << endl;
}
