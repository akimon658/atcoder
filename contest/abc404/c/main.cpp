#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, m;
  input(n, m);
  vector<vector<int>> g(n);
  rep(i, 0, m) {
    int a, b;
    input(a, b);
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  rep(i, 0, n) {
    if (g[i].size() != 2) {
      cout << No << el;
      return 0;
    }
  }
  // set<int> seen;
  // seen.insert(0);
  // int p = g[0][0];
  // rep(i, 0, n) {
  //   seen.insert(p);
  //   p = g[p][0];
  //   if (seen.contains(p)) {
  //     p = g[p][1];
  //   }
  // }
  // seen.insert(p);
  // if ((int)seen.size() != n) {
  //   cout << No << el;
  //   return 0;
  // }
  vector<bool> visited(n);
  int count = 0;
  function<void(int)> dfs = [&](int v) {
    visited[v] = true;
    count++;
    for (int u : g[v]) {
      if (!visited[u]) {
        dfs(u);
      }
    }
  };
  dfs(0);
  if (count != n) {
    cout << No << el;
    return 0;
  }
  cout << Yes << el;
}
