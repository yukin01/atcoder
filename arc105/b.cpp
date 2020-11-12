#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  set<int> A;
  int a;
  rep(i, N) {
    cin >> a;
    A.insert(a);
  }
  int x = *begin(A);
  int X = *rbegin(A);
  while (x != X) {
    A.erase(X);
    A.insert(X - x);
    x = *begin(A);
    X = *rbegin(A);
  }
  cout << x << endl;
}
