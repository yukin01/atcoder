#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int N, M;
ll K;
vector<int> A, B;
int ans = 0;
ll now = 0;

void newbfs(int ai, int bi, ll now) {
  while (bi < M) {
    if (now + B.at(bi) > K) break;
    now += B.at(bi);
    bi++;
  }
  ans = max(ans, ai + bi);

  if (ai == 0) return;
  ai--;
  now -= A.at(ai);
  newbfs(ai, bi, now);
}

int main() {
  cin >> N >> M >> K;
  A = vector<int>(N);
  B = vector<int>(M);
  rep(i, N) cin >> A.at(i);
  rep(i, M) cin >> B.at(i);

  int ai = 0;
  ll now = 0;
  while (ai < N) {
    if (now + A.at(ai) > K) break;
    now += A.at(ai);
    ai++;
  }
  ans = ai;

  newbfs(ai, 0, now);
  cout << ans << endl;
}
