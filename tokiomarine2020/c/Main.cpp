#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  vector<int> B;
  for (int i = 0; i < K; i++) {
    B = vector<int>(N, 0);

    for (int j = 0; j < N; j++) {
      int a = A.at(j); // A_j
      int left = max(j - a, 0);
      int right = min(j + a, N - 1);
      B.at(left)++;
      if (right != N - 1) {
        B.at(right + 1)--;
      }
    }

    for (int j = 1; j < N; j++) {
      B.at(j) += B.at(j - 1);
    }

    if (A == B) break;
    swap(A, B);
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
