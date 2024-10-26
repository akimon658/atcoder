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
  int n;
  ll k;
  cin >> n >> k;
  vector<int> orig(n);
  bool all_i = true;
  rep(i, 0, n) {
    cin >> orig[i];
    if (orig[i] - 1 != i) {
      all_i = false;
    }
  }
  if (all_i) {
    rep(i, 0, n) { cout << orig[i] << " "; }
    cout << el;
    return 0;
  }
  vector<int> p(n);
  int count = 0;
  vector<vector<int>> cycle;
  while (p != orig) {
    if (count == 0) {
      copy(all(orig), p.begin());
    }
    vector<int> q(n);
    rep(i, 0, n) { q[i] = p[p[i] - 1]; }
    p = q;
    cycle.push_back(q);
    count++;
  }
  ll times = k % count;
  rep(i, 0, n) { cout << cycle[times - 1][i] << " "; }
  cout << el;
}
