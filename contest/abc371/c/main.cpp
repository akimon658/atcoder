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
  int n, m_g, m_h;
  cin >> n >> m_g;
  vector<set<int>> g(n);
  rep(i, 0, m_g) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].insert(v);
    g[v].insert(u);
  }
  cin >> m_h;
  vector<set<int>> h(n);
  rep(i, 0, m_h) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    h[a].insert(b);
    h[b].insert(a);
  }
  vector<vector<ll>> a(n, vector<ll>(n));
  rep(i, 0, n - 1) {
    rep(j, i + 1, n) {
      cin >> a[i][j];
      a[j][i] = a[i][j];
    }
  }
  vector<int> p(n);
  iota(all(p), 0);
  ll ans = LLONG_MAX;
  do {
    ll sum = 0;
    rep(i, 0, n - 1) {
      rep(j, i + 1, n) {
        if (g[p[i]].contains(p[j]) == h[i].contains(j)) {
          continue;
        }
        sum += a[i][j];
      }
    }
    ans = min(sum, ans);
  } while (next_permutation(all(p)));
  cout << ans << el;
}
