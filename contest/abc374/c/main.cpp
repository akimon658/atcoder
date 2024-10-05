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
  cin >> n;
  vector<ll> k(n);
  rep(i, 0, n) { cin >> k[i]; }
  ll ans = LLONG_MAX;
  rep(bit, 0, 1 << n) {
    ll a = 0, b = 0;
    rep(i, 0, n) {
      if (bit & (1 << i)) {
        a += k[i];
      } else {
        b += k[i];
      }
    }
    ans = min(ans, max(a, b));
  }
  cout << ans << el;
}
