#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

void mark(vector<int>& ans, vector<vector<int>>& graph, set<int> rooms) {
  set<int> next_rooms;
  for (auto room : rooms) {
    auto vec = graph.at(room);
    for (int v : vec) {
      if (ans.at(v) == 0 && v != 1) {
        ans.at(v) = room;
        next_rooms.insert(v);
      }
    }
  }
  if (next_rooms.size() > 0) mark(ans, graph, next_rooms);
}

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> graph(N + 1, vector<int>(0));
  rep(i, M) {
    int a, b;
    cin >> a >> b;
    graph.at(a).push_back(b);
    graph.at(b).push_back(a);
  }

  vector<int> ans_vec(N + 1, 0);

  set<int> first_rooms;
  first_rooms.insert(1);
  mark(ans_vec, graph, first_rooms);

  ans_vec.erase(ans_vec.begin());
  ans_vec.erase(ans_vec.begin());
  for (auto a : ans_vec) {
    if (a == 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  for (auto a : ans_vec) {
    cout << a << endl;
  }
}
