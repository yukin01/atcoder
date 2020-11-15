#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll N;
  cin >> N;
  queue<ll> prev;
  stack<ll> next;

  for (ll i = 1; i * i <= N; i++) {
    if (N % i != 0) continue;
    prev.push(i);
    if (i != N / i) next.push(N / i);
  }

  while (!prev.empty()) {
    cout << prev.front() << endl;
    prev.pop();
  }

  while (!next.empty()) {
    cout << next.top() << endl;
    next.pop();
  }
}
