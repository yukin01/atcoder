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
  string S;
  cin >> S;
  vector<int> v(10, 0);
  for (auto s : S) {
    v.at(ctoi(s))++;
  }

  int n = 0;
  while (n + 8 < 10) {
    n += 8;
    if (S == to_string(n)) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  while (n + 8 < 100) {
    n += 8;
    int rev_n = (n % 10) * 10 + (n / 10);
    if (S == to_string(n) || S == to_string(rev_n)) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  while (n + 8 < 1000) {
    n += 8;

    if (n < 100 || n % 10 == 0 || n / 10 % 10 == 0) continue;
    vector<int> w(10, 0);
    w.at(n / 100)++;      // 100
    w.at(n / 10 % 10)++;  // 10
    w.at(n % 10)++;       // 1

    bool flag = true;
    rep(i, 10) {
      if (v.at(i) < w.at(i)) flag = false;
    }
    if (flag) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
