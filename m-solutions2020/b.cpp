#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  int cnt = 0;
  while (A >= B) {
    B *= 2;
    cnt++;
  }
  while (B >= C) {
    C *= 2;
    cnt++;
  }
  string ans = cnt <= K ? "Yes" : "No";
  cout << ans << endl;
}
