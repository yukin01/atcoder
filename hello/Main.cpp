#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using Bint = boost::multiprecision::cpp_int;

int main(void) {
  Bint a = 546534242;
  Bint b("238431313536543513515132513213516353");
  Bint c("365435435435135435143548546841324135");

  cout << "Hello world!" << endl;
  cout << a * b % c << endl;
}
