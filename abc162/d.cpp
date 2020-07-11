#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  string S;
  cin >> N >> S;
  vector<int> R, G, B;
  rep(i, N) {
    if (S.at(i) == 'R') R.push_back(i);
    if (S.at(i) == 'G') G.push_back(i);
    if (S.at(i) == 'B') B.push_back(i);
  }
  int cnt = 0;
  for (auto r : R) {
    for (auto g : G) {
      for (auto b : B) {
        int sum = r + g + b;
        if (sum == 3 * r || sum == 3 * g || sum == 3 * b) continue;
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}
