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
  int h, w;
  cin >> h >> w;
  vector<vector<char>> c(h, vector<char>(w));
  rep(i, 0, h) {
    rep(j, 0, w) { cin >> c[i][j]; }
  }
  int max_dist = 1;
  set<pair<int, int>> q;
  q.insert({0, 0});
  while (q.size()) {
    pair<int, int> current = *q.begin();
    max_dist = max(max_dist, current.first + current.second + 1);
    if (current.first + 1 < h && c[current.first + 1][current.second] == '.') {
      q.insert({current.first + 1, current.second});
    }
    if (current.second + 1 < w && c[current.first][current.second + 1] == '.') {
      q.insert({current.first, current.second + 1});
    }
    q.erase(current);
  }
  cout << max_dist << el;
}
