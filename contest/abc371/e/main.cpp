#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

ll patterns(ll n) { return n * (n + 1) / 2; }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;
  vector<vector<ll>> indexes(n, vector<ll>(1));
  rep(i, 0, n) {
    ll a;
    cin >> a;
    indexes[a - 1].push_back(i + 1);
  }
  ll num_all = patterns(n);
  ll ans = 0;
  rep(i, 0, n) {
    indexes[i].push_back(n + 1);
    ll num_not_contains = 0;
    rep(j, 1, indexes[i].size()) {
      num_not_contains += patterns(indexes[i][j] - indexes[i][j - 1] - 1);
    }
    ans += num_all - num_not_contains;
  }
  cout << ans << el;
}
