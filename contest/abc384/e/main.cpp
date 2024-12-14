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

set<pair<ll, pair<int, int>>> neighbors;
set<pair<int, int>> takahashi_area;
int h, w, p, q;
vector<vector<ll>> s;
ll takahashi = 0;

void absorb(pair<int, int> p) {
  if (p.first > 0 && !takahashi_area.contains({p.first - 1, p.second})) {
    neighbors.insert({s[p.first - 1][p.second], {p.first - 1, p.second}});
  }
  if (p.first < h - 1 && !takahashi_area.contains({p.first + 1, p.second})) {
    neighbors.insert({s[p.first + 1][p.second], {p.first + 1, p.second}});
  }
  if (p.second > 0 && !takahashi_area.contains({p.first, p.second - 1})) {
    neighbors.insert({s[p.first][p.second - 1], {p.first, p.second - 1}});
  }
  if (p.second < w - 1 && !takahashi_area.contains({p.first, p.second + 1})) {
    neighbors.insert({s[p.first][p.second + 1], {p.first, p.second + 1}});
  }
  takahashi_area.insert(p);
  takahashi += s[p.first][p.second];
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll x;
  cin >> h >> w >> x >> p >> q;
  s.resize(h, vector<ll>(w));
  p--;
  q--;
  rep(i, 0, h) {
    rep(j, 0, w) { cin >> s[i][j]; }
  }
  absorb({p, q});
  while (neighbors.size()) {
    auto weak = *neighbors.begin();
    if (weak.first >= (takahashi + x - 1) / x) {
      break;
    }
    absorb(weak.second);
    neighbors.erase(weak);
  }
  cout << takahashi << el;
}
