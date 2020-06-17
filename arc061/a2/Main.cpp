#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

ll many_sum(string s) {
  ll tmp = stoll(s);

  if (s.size() == 1) {
    return tmp;
  }

  for (int i = 1; i < s.size(); i++) {
    string s_first = s.substr(0, i);
    string s_second = s.substr(i);
    tmp += stoll(s_first);
    tmp += many_sum(s_second);
  }
  return tmp;
}

int main() {
  string S;
  cin >> S;

  ll sum = many_sum(S);
  cout << sum << endl;
}
