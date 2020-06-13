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

    bool finish = true;
    for (int j = 0; j < N; j ++) {
      int a = A.at(j); // A_j
      int left = max(j - a, 0);
      int right = min(j + a, N - 1);
      for (int k = left; k < right + 1; k++) {
        B.at(k)++;
      }
      for (int b : B) {
        if (b != N) {
          finish = false;
        }
      }
    }
    A = B;
    if (finish) {
      break;
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
