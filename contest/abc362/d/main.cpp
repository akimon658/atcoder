#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i, 0, n) { cin >> a[i]; }
  vector<vector<pair<int, ll>>> g(n);
  rep(i, 0, m) {
    int u, v;
    ll b;
    cin >> u >> v >> b;
    u--;
    v--;
    g[u].push_back({v, b});
    g[v].push_back({u, b});
  }
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>>
      pq;
  vector<ll> dist(n, -1);
  pq.push({a[0], 0});
  while (!pq.empty()) {
    auto [d, u] = pq.top();
    pq.pop();
    if (dist[u] != -1) {
      continue;
    }
    dist[u] = d;
    for (auto [v, w] : g[u]) {
      if (dist[v] != -1) {
        continue;
      }
      pq.push({dist[u] + w + a[v], v});
    }
  }
  rep(i, 1, n) { cout << dist[i] << " "; }
  cout << el;
  return 0;
}
