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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<vector<char>> s(h, vector<char>(w));
  rep(i, 0, h) {
    rep(j, 0, w) { cin >> s[i][j]; }
  }
  string t;
  cin >> t;
  set<pair<int, int>> visited;
  for (auto c : t) {
    int next_x = x;
    int next_y = y;
    switch (c) {
    case 'U':
      next_x--;
      break;
    case 'D':
      next_x++;
      break;
    case 'L':
      next_y--;
      break;
    default:
      next_y++;
    }
    if (0 <= next_x && next_x < h && 0 <= next_y && next_y < w &&
        s[next_x][next_y] != '#') {
      x = next_x;
      y = next_y;
      if (s[x][y] == '@') {
        visited.insert({x, y});
      }
    }
  }
  cout << x + 1 << ' ' << y + 1 << ' ' << visited.size() << el;
}
