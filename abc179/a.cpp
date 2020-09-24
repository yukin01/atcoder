#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  string S;
  cin >> S;
  string T = S.at(S.length() - 1) == 's' ? "es" : "s";
  cout << S << T << endl;
}
