#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

template <typename T>
void print_vec(vector<T> vec) {
  rep(i, vec.size()) {
    cout << vec.at(i);
    if (i == vec.size() - 1) {
      cout << endl;
    } else {
      cout << ' ';
    }
  }
}

int main() {
  print_vec(vector<int>{1, 2, 3, 4, 5});
}
