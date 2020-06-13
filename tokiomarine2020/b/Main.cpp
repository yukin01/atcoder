#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using Bint = boost::multiprecision::cpp_int;

int main() {
  Bint A, B, V, W, T;
  cin >> A >> V >> B >> W >> T;

  if (V < W) {
    cout << "NO" << endl;
    return 0;
  }
  
  string result;
  if (abs(A - B) <= (V - W) * T) {
    result = "YES";
  } else {
    result = "NO";
  }
  cout << result << endl;
}
