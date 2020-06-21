#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int K;
  string S;
  cin >> K >> S;
  string ans = S.size() <= K ? S : S.substr(0, K) + "...";
  cout << ans << endl;
}
