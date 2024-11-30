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
  int n, m;
  cin >> n >> m;
  int margin = m - (10 * n - 9);
  vector<int> v(n);
  int x = 1;
  vector<vector<int>> ans;
  auto dfs = [&](auto self, int i, int val_min, int margin_left) {
    if (i == n) {
      ans.push_back(v);
      x++;
      return;
    }
    rep(j, 0, margin_left + 1) {
      v[i] = val_min + j;
      self(self, i + 1, val_min + 10 + j, margin_left - j);
    }
  };
  dfs(dfs, 0, 1, margin);
  cout << ans.size() << el;
  rep(i, 0, ans.size()) {
    rep(j, 0, n) { cout << ans[i][j] << " "; }
    cout << el;
  }
}
