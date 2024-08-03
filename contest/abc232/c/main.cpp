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
  int n, m;
  cin >> n >> m;
  vector<set<int>> takahashi(n), aoki(n);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    takahashi[a].insert(b);
    takahashi[b].insert(a);
  }
  rep(i, 0, m) {
    int c, d;
    cin >> c >> d;
    c--;
    d--;
    aoki[c].insert(d);
    aoki[d].insert(c);
  }
  vector<int> p(n);
  iota(all(p), 0);
  do {
    rep(i, 0, n) {
      rep(j, i + 1, n) {
        if (takahashi[i].contains(j) != aoki[p[i]].contains(p[j])) {
          goto END_LOOP;
        }
      }
    }
    cout << "Yes" << el;
    return 0;
  END_LOOP:
    continue;
  } while (next_permutation(all(p)));
  cout << "No" << el;
}
