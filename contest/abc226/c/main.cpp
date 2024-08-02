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
  int n;
  cin >> n;
  vector<ll> t(n);
  vector<vector<int>> a(n);
  rep(i, 0, n) {
    cin >> t[i];
    int k;
    cin >> k;
    a[i].resize(k);
    rep(j, 0, k) {
      cin >> a[i][j];
      a[i][j]--;
    }
  }
  set<int> q, moves;
  q.insert(n - 1);
  moves.insert(n - 1);
  while (q.size()) {
    auto itr = q.begin();
    for (int elem : a[*itr]) {
      if (!moves.contains(elem)) {
        q.insert(elem);
      }
      moves.insert(elem);
    }
    q.erase(*itr);
  }
  ll sum = 0;
  for (auto &elem : moves) {
    sum += t[elem];
  }
  cout << sum << el;
}
