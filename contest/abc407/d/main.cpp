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
  int h, w;
  input(h, w);
  vector<vector<ll>> a(h, vector<ll>(w));
  ll all_xor = 0;
  rep(i, 0, h) {
    rep(j, 0, w) {
      input(a[i][j]);
      all_xor ^= a[i][j];
    }
  }
  ll result = 0;
  set<pair<int, int>> covered;
  auto dfs = [&](auto self, ll score, set<pair<int, int>> seen) -> void {
    if (score > result) {
      result = score;
    }
    rep(i, 0, h) {
      rep(j, 0, w) {
        if (!seen.contains({i, j})) {
          seen.insert({i, j});
          covered.insert({i, j});
          ll new_score = score ^ a[i][j];
          if (i + 1 < h && !covered.contains({i + 1, j})) {
            covered.insert({i + 1, j});
            self(self, new_score ^ a[i + 1][j], seen);
            covered.erase({i + 1, j});
          }
          if (j + 1 < w && !covered.contains({i, j + 1})) {
            covered.insert({i, j + 1});
            self(self, new_score ^ a[i][j + 1], seen);
            covered.erase({i, j + 1});
          }
          covered.erase({i, j});
        }
      }
    }
  };
  dfs(dfs, all_xor, covered);
  cout << result << el;
}
