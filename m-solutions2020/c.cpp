#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A.at(i);

  for (int i = K; i < N; i++) {
    if (A.at(i - K) < A.at(i)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
