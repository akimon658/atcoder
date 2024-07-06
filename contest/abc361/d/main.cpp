#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n;
  cin >> n;
  vector<vector<pair<int, ll>>> g(n);
  rep(i, 0, n - 1) {
    int a, b;
    ll c;
    cin >> a >> b >> c;
    a--;
    b--;
    g[a].emplace_back(b, c);
    g[b].emplace_back(a, c);
  }
  priority_queue<pair<ll, int>> pq;
  return 0;
}
