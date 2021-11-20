#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int s, t, x;
  cin >> s >> t >> x;
  s *= 60;
  t *= 60;
  x = x * 60 + 30;

  if (s < x && x < t || x < t && t < s || t < s && s < x) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
