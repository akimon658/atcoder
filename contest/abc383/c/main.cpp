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

int w;

int point_to_idx(int i, int j) { return i * w + j; }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h, d;
  cin >> h >> w >> d;
  vector<vector<pair<int, int>>> graph(h * w);
  vector<vector<char>> s(h, vector<char>(w));
  rep(i, 0, h) {
    rep(j, 0, w) { cin >> s[i][j]; }
  }
  queue<pair<pair<int, int>, int>> q;
  rep(i, 0, h) {
    rep(j, 0, w) {
      if (s[i][j] != '#') {
        if (i + 1 < h && s[i + 1][j] != '#') {
          graph[point_to_idx(i, j)].push_back({i + 1, j});
          graph[point_to_idx(i + 1, j)].push_back({i, j});
        }
        if (j + 1 < w && s[i][j + 1] != '#') {
          graph[point_to_idx(i, j)].push_back({i, j + 1});
          graph[point_to_idx(i, j + 1)].push_back({i, j});
        }
      }
      if (s[i][j] == 'H') {
        q.push({{i, j}, 0});
      }
    }
  }
  set<pair<int, int>> ans;
  set<pair<int, int>> seen;
  while (!q.empty()) {
    pair<pair<int, int>, int> front = q.front();
    vector<pair<int, int>> g =
        graph[point_to_idx(front.first.first, front.first.second)];
    seen.insert(front.first);
    int depth = front.second;
    if (depth <= d) {
      ans.insert(front.first);
    }
    rep(k, 0, g.size()) {
      if (!seen.contains(g[k])) {
        q.push({g[k], depth + 1});
      }
    }
    q.pop();
  }
  cout << ans.size() << el;
}
