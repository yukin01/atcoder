#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, x, y;
  cin >> N;
  vector<P> v(N);
  rep(i, N) {
    cin >> x >> y;
    v.at(i) = P{x, y};
  }

  int a, b, c, d;
  for (int i = 0; i < N - 2; i++)
    for (int j = i + 1; j < N - 1; j++)
      for (int k = j + 1; k < N; k++) {
        a = v.at(j).first - v.at(i).first;
        b = v.at(k).first - v.at(j).first;
        c = v.at(j).second - v.at(i).second;
        d = v.at(k).second - v.at(j).second;
        if (a * d == b * c) {
          cout << "Yes" << endl;
          return 0;
        }
      }
  cout << "No" << endl;
}
