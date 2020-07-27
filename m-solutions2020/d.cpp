#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;

  int now;
  int prev;
  int max;
  int min;
  ll ans = 1000;

  int slope = 0;
  rep(i, N) {
    if (i == 0) {
      cin >> prev;
      now = prev;
      max = prev;
      min = prev;
      continue;
    }

    prev = now;
    cin >> now;
    if (now < prev) {
      if (slope > 0) {
        ans += (ans / min) * (max - min);
      }
      min = now;
      slope = -1;
    };
    if (now > prev) {
      if (slope < 0) {
        min = prev;
      }
      max = now;
      slope = 1;
    };

    if (i == N - 1 && slope == 1) {
      ans += (ans / min) * (now - min);
    }
  }
  cout << ans << endl;
}
