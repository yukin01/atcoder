#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const ll maxN = 1000000000000001LL;

int main() {
  ll N;
  cin >> N;
  vector<ll> vec(1, 0);

  const ll base = 26;
  ll p = 1;
  ll sum = 0;
  while (true) {
    ll v = pow(base, p);
    if (sum + v > maxN) break;
    sum += v;
    vec.push_back(sum);
    p++;
  }

  auto itr = lower_bound(vec.begin(), vec.end(), N);
  int idx = distance(vec.begin(), itr);

  // cout << "-----" << endl;
  // rep(i, vec.size()) {
  //   cout << vec.at(i) << endl;
  // }
  // cout << "-----" << endl;

  ll tmp = N - vec.at(idx - 1);
  // cout << tmp << endl;
  string ans = "";
  rep(i, idx) {
    ans += "a";
  }
  // cout << ans << endl;
  int j = idx - 1;
  while (true) {
    // if (tmp == 26) {
    //   ans.at(j) = 'z';
    //   break;
    // }
    ll rest = tmp % 26;
    tmp /= 26;
    if (rest == 0) {
      rest = 26;
      // tmp--;
    } else {
      tmp++;
    }
    ans.at(j) = (char)(rest + 96);
    if (tmp == 1) {
      break;
    }
    j--;
  }

  cout << ans << endl;

  // if (itr == vec.end()) {
  //   cout << "not found" << endl;
  // } else {
  //   cout << idx << ' ' << *itr << endl;
  // }
}

// 0
// 26
// 702
// 18278
// 475254
// 12356630
// 321272406
// 8353082582
// 217180147158
// 5646683826134
// 146813779479510
