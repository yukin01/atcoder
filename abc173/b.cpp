#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  int AC = 0;
  int WA = 0;
  int TLE = 0;
  int RE = 0;
  rep(i, N) {
    string s;
    cin >> s;
    if (s == "AC")
      AC++;
    else if (s == "WA")
      WA++;
    else if (s == "TLE")
      TLE++;
    else if (s == "RE")
      RE++;
  }
  cout << "AC x " << AC << endl;
  cout << "WA x " << WA << endl;
  cout << "TLE x " << TLE << endl;
  cout << "RE x " << RE << endl;
}
