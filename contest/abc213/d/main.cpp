#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n;
  cin >> n;
  vector<set<int>> graph(n);
  rep(i, 0, n - 1) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].insert(b);
    graph[b].insert(a);
  }
  vector<int> previous_city(n);
  for (int i = 0;;) {
    cout << i + 1 << " ";
    if (graph[i].empty()) {
      if (i == 0) {
        break;
      }
      i = previous_city[i];
      continue;
    }
    int next = *graph[i].begin();
    graph[i].erase(next);
    graph[next].erase(i);
    previous_city[next] = i;
    i = next;
  }
  cout << el;
  return 0;
}
