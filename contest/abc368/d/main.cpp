#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<vector<int>> g(n - 1);
  rep(i, 0, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  set<int> v;
  rep(i, 0, k) {
    int tmp;
    cin >> tmp;
    v.insert(tmp - 1);
  }
  vector<vector<int>> tree(n);
  tree[0].push_back(-1);
  int cnt = 1;
  while (cnt < n) {
  }
  set<int> visited;
  vector<bool> seen(n);
  vector<set<int>> dp(n);
  dp[0].insert(0);
  auto dfs = [&](auto dfs, int i) -> void {
    seen[i] = true;
    if (v.contains(i)) {
      visited.merge(dp[i]);
    }
    for (int next : g[i]) {
      if (!seen[next]) {
        dp[next] = dp[i];
        dp[next].insert(next);
        dfs(dfs, next);
      }
    }
  };
  dfs(dfs, *v.begin());
  cout << visited.size() << el;
}
