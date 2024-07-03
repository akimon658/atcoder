#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

void answer(bool b) {
  string ans = "No";
  if (b) {
    ans = "Yes";
  }
  cout << ans << "\n";
  exit(0);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n);
  rep(i, 0, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  int idx = -1;
  set<int> visited;
  rep(i, 0, n) {
    if (graph[i].size() == 1) {
      visited.insert(i);
      idx = graph[i][0];
      break;
    }
  }
  if (idx == -1) {
    answer(false);
  }
  rep(i, 0, n - 2) {
    if (graph[idx].size() != 2) {
      answer(false);
    }
    visited.insert(idx);
    rep(j, 0, 2) {
      if (!visited.contains(graph[idx][j])) {
        idx = graph[idx][j];
      }
    }
    if (visited.contains(idx)) {
      answer(false);
    }
  }
  if (graph[idx].size() != 1) {
    answer(false);
  }
  answer(true);
  return 0;
}
