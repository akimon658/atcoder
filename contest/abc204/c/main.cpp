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
  vector<vector<int>> g(n);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    g[a - 1].push_back(b - 1);
  }
  vector<set<int>> can_visit(n);
  rep(i, 0, n) {
    queue<int> q;
    q.push(i);
    while (!q.empty()) {
      int current = q.front();
      q.pop();
      can_visit[i].insert(current);
      rep(j, 0, g[current].size()) {
        int next = g[current][j];
        if (!can_visit[i].contains(next)) {
          q.push(next);
        }
      }
    }
  }
  int sum = 0;
  rep(i, 0, n) { sum += can_visit[i].size(); }
  cout << sum << el;
}
