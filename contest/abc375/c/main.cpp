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
  int n;
  cin >> n;
  vector<vector<char>> ans(n, vector<char>(n));
  rep(x, 1, n + 1) {
    rep(y, 1, n + 1) {
      int num_rotate = min({x, y, n - x + 1, n - y + 1});
      vector<pair<int, int>> destinations = {
          {x, y},
          {y, n + 1 - x},
          {n + 1 - x, n + 1 - y},
          {n + 1 - y, x},
      };
      pair<int, int> dest = destinations[num_rotate % 4];
      char a;
      cin >> a;
      ans[dest.first - 1][dest.second - 1] = a;
    }
  }
  rep(i, 0, n) {
    rep(j, 0, n) { cout << ans[i][j]; }
    cout << el;
  }
}
