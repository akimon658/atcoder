#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> graph(n);
  rep(i, 0, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }
  vector<bool> checked(n);
  int cnt = 0;
  rep(i, 0, n) {
    if (checked[i]) {
      continue;
    }
    deque<int> dq;
    dq.push_back(i);
    while (!dq.empty()) {
      int front = dq.front();
      rep(j, 0, graph[front].size()) {
        if (!checked[graph[front][j]]) {
          dq.push_back(graph[front][j]);
          checked[graph[front][j]] = true;
        }
      }
      checked[front] = true;
      dq.pop_front();
    }
    cnt++;
  }
  cout << cnt << "\n";
  return 0;
}
