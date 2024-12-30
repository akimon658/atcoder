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
  ll n;
  int m;
  cin >> n >> m;
  vector<tuple<ll, ll, char>> query(m);
  rep(i, 0, m) {
    cin >> get<0>(query[i]) >> get<1>(query[i]) >> get<2>(query[i]);
  }
  sort(all(query));
  ll min_y = LLONG_MAX;
  rep(i, 0, m) {
    auto [x, y, c] = query[i];
    if (c == 'B') {
      if (y >= min_y) {
        cout << No << el;
        return 0;
      }
    } else {
      min_y = min(min_y, y);
    }
  }
  cout << Yes << el;
}
