#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

vector<vector<int>> g;
vector<int> path;
set<int> visited;
int y;

void dfs(int i) {
  path.push_back(i);
  visited.insert(i);
  if (i == y - 1) {
    for (int &e : path) {
      cout << e + 1 << " " << el;
    }
    exit(0);
  }
  for (int &e : g[i]) {
    if (!visited.contains(e)) {
      dfs(e);
    }
  }
  path.pop_back();
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, x;
  cin >> n >> x >> y;
  g.resize(n);
  rep(i, 0, n - 1) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(x - 1);
}
