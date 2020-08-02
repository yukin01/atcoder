#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Tuple = tuple<int, int, int, string>;

int main() {
  int N;
  cin >> N;
  string C;
  cin >> C;
  int cnt = 0;
  rep(i, N) {
    if (C.at(i) == 'R') cnt++;
  }

  // priority_queue<Tuple, vector<Tuple>, greater<Tuple>> que;
  queue<Tuple> que;
  que.push(Tuple(0, cnt, C.size(), C));

  int ans;
  while (true) {
    auto t = que.front();
    que.pop();

    int t1 = get<0>(t);
    int t2 = get<1>(t);
    int t3 = get<2>(t);
    string t4 = get<3>(t);

    if (t2 == 0 || t2 == t3) {
      ans = t1;
      break;
    }

    bool isR = t4.at(0) == 'R';
    t4 = t4.substr(1);
    t3--;

    if (isR) {
      que.push(Tuple(t1, t2 - 1, t3, t4));
      continue;
    }

    // que.push(Tuple(t1 + 1, t2, t3, t4));
    for (int i = t3; i > 0; i--) {
      if (t4.at(i - 1) == 'R') {
        string newT4 = t4;
        newT4.at(i - 1) = 'W';
        que.push(Tuple(t1 + 1, t2 - 1, t3, newT4));
        break;
      }
    }
  }

  cout << ans << endl;
}
