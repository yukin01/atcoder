#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  if (N <= K) {
    for (int i = 0; i < N; i++) {
      cout << N;
      if (i == N - 1) {
        cout << endl;
      } else {
        cout << ' ';
      }
    }
    return 0;
  }

  vector<int> B;
  for (int i = 0; i < K; i++) {
    B = vector<int>(N, 0);

    for (int j = 0; j < N; j++) {
      int a = A.at(j); // A_j
      int left = max(j - a, 0);
      int right = min(j + a, N - 1);
      // for (int k = left; k < right + 1; k++) {
      //   B.at(k)++;
      // }
      B.at(left)++;
      if (right != N - 1) {
        B.at(right + 1)--;
      }
    }
    // A = B;
    int a = 0;
    for (int j = 0; j < N; j++) {
      a += B.at(j);
      A.at(j) = a;
    }
  }

  for (int i = 0; i < N; i++) {
    cout << A.at(i);
    if (i == N - 1) {
      cout << endl;
    } else {
      cout << ' ';
    }
  }
}
