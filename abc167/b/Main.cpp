#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;
  int max = 0;

  if (A > K) {
    max += K;
    cout << max << endl;
    return 0;
  }
  max += A;
  K -= A;

  if (B > K) {
    cout << max << endl;
    return 0;
  }
  K -= B;

  max -= K;
  cout << max << endl;
}
