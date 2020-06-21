#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

map<char, int> map_int;
map<char, vector<int>> map_vec;

int ctoi(const char c) {
  if ('0' <= c && c <= '9') return (c - '0');
  return -1;
}

vector<int> operator+(const vector<int>& v1, const vector<int>& v2) {
  vector<int> result(0);
  rep(i, v1.size()) {
    result.push_back(v1.at(i) + v2.at(i));
  }
  return result;
}

vector<int> operator-(const vector<int>& v1, const vector<int>& v2) {
  vector<int> result(0);
  rep(i, v1.size()) {
    result.push_back(v1.at(i) - v2.at(i));
  }
  return result;
}

void get_expr(vector<char>& expr) {
  while (true) {
    char e;
    cin >> e;
    if (e == ';') break;
    if (e == '=') continue;
    expr.push_back(e);
  }
}

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

int calc_int(vector<char> expr) {
  int result = 0;
  char op = '+';
  for (auto e : expr) {
    if (e == '+' || e == '-') {
      op = e;
      continue;
    }
    if (isdigit(e)) {
      if (op == '+') result += ctoi(e);
      if (op == '-') result -= ctoi(e);
    } else {
      if (op == '+') result += map_int.at(e);
      if (op == '-') result -= map_int.at(e);
    }
  }
  return result;
}

vector<int> calc_vec(vector<char> expr) {
  vector<int> result(0);
  char op = '+';
  bool vec_input_mode = false;
  vector<int> tmp_vec(0);
  for (auto e : expr) {
    if (e == ',') continue;
    if (e == '+' || e == '-') {
      op = e;
      continue;
    }
    if (e == '[') {
      vec_input_mode = true;
      continue;
    }
    if (e == ']') {
      vec_input_mode = false;
      if (result.size() == 0) {
        result = vector<int>(tmp_vec.size(), 0);
      }
      if (op == '+') result = result + tmp_vec;
      if (op == '-') result = result - tmp_vec;
      tmp_vec = vector<int>(0);
      continue;
    }

    if (vec_input_mode) {
      tmp_vec.push_back(isdigit(e) ? ctoi(e) : map_int.at(e));
    } else {
      if (result.size() == 0) {
        result = vector<int>(map_vec.at(e).size(), 0);
      }
      if (op == '+') result = result + map_vec.at(e);
      if (op == '-') result = result - map_vec.at(e);
    }
  }
  return result;
}

int main() {
  int N;
  cin >> N;

  rep(i, N) {
    string order;
    cin >> order;
    vector<char> expr;
    char key;

    if (order == "int") {
      cin >> key;
      get_expr(expr);
      int r = calc_int(expr);
      map_int[key] = r;
    }
    if (order == "print_int") {
      get_expr(expr);
      int r = calc_int(expr);
      cout << r << endl;
    }
    if (order == "vec") {
      cin >> key;
      get_expr(expr);
      auto r = calc_vec(expr);
      map_vec[key] = r;
    }
    if (order == "print_vec") {
      get_expr(expr);
      auto r = calc_vec(expr);
      print_vec(r);
    }
  }
}
