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

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, q;
  cin >> n >> q;
  vector<vector<int>> g(n);
  rep(i, 0, q) {
    int type;
    cin >> type;
    switch (type) {
    case 1: {
      int u, v;
      cin >> u >> v;
      u--;
      v--;
      g[u].push_back(v);
      g[v].push_back(u);
      break;
    }
    case 2: {
      int k, v;
      cin >> v >> k;
      v--;
      int ans = -1;
      if (g[v].size() >= k) {
        sort(all(g[v]), greater());
        ans = g[v][k - 1] + 1;
      }
      cout << ans << el;
    }
    }
  }
}
