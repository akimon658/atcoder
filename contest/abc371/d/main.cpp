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
  int n, q;
  cin >> n;
  vector<ll> x(n), p(n);
  rep(i, 0, n) { cin >> x[i]; }
  rep(i, 0, n) { cin >> p[i]; }
  vector<ll> s(n + 1);
  s[0] = 0;
  rep(i, 0, n) { s[i] = s[i - 1] + p[i]; }
  cin >> q;
  rep(i, 0, q) {
    ll l, r;
    cin >> l >> r;
    auto it_l = lower_bound(all(x), l);
    auto it_r = upper_bound(all(x), r);
    cout << s[distance(x.begin(), it_r) - 1] - s[distance(x.begin(), it_l) - 1]
         << el;
  }
}
