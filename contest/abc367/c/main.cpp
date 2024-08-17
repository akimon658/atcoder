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
  vector<int> r(n);
  rep(i, 0, n) { cin >> r[i]; }
  vector<int> v(n);
  set<vector<int>> ans;
  auto dfs = [&](auto dfs, int i) -> void {
    if (i == n) {
      int sum = 0;
      rep(i, 0, n) { sum += v[i]; }
      if (sum % k == 0) {
        ans.insert(v);
      }
    } else {
      for (int j = 1; j <= r[i]; j++) {
        v[i] = j;
        dfs(dfs, i + 1);
      }
    }
  };
  dfs(dfs, 0);
  for (auto e : ans) {
    rep(i, 0, n) { cout << e[i] << " "; }
    cout << el;
  }
}
