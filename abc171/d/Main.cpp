#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  map<int, int> A;
  ll sum = 0;
  rep(i, N) {
    int a;
    cin >> a;
    A[a]++;
    sum += a;
  }
  int Q;
  cin >> Q;
  rep(i, Q) {
    int B, C;
    cin >> B >> C;
    if (A[B] > 0) {
      sum += A[B] * (C - B);
      A[C] += A[B];
      A[B] = 0;
    }
    cout << sum << endl;
  }
}
