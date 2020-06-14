#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) {
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());

  map<int, int> M;
  rep(i, N) {
    M[A.at(i)] += 1;
  }

  int count = 0;
  rep(i, N) {
    if (M.at(A.at(i)) > 1) {
      continue;
    }

    bool flag = true;
    int hoge;
    if (A.at(i) % 2 == 0) {
      hoge = A.at(i) / 2;
    } else {
      hoge = A.at(i) / 3;
    }

    auto it = upper_bound(A.begin(), A.end(), hoge);
    int index = it - A.begin();
    for (int j = 0; j < index; j++) {
      if (A.at(i) % A.at(j) == 0) {
        flag = false;
        break;
      }
    }
    if (flag) count++;
  }

  cout << count << endl;
}
