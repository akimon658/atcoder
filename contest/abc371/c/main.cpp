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
    g[min(u, v)].insert(max(u, v));
  }
  cin >> m_h;
  vector<set<int>> h(n);
  rep(i, 0, m_h) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    h[min(a, b)].insert(max(a, b));
  }
  vector<vector<ll>> a(n - 1);
  rep(i, 0, n - 1) {
    vector<ll> sub_a(n - 1 - i);
    rep(j, i + 1, n) { cin >> sub_a[j]; }
    a[i] = sub_a;
  }
  ll sum = 0;
  rep(i, 0, n - 1) {
    rep(j, i + 1, n) {
      if (g[i].contains(j) == h[i].contains(j)) {
        continue;
      }
      cout << format("i = {}, j = {}", i, j) << el;
      sum += a[i][j];
    }
  }
  cout << sum << el;
}
