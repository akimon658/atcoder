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
  ll n;
  cin >> n;
  set<ll> a_set;
  vector<ll> s(n + 1);
  s[0] = 0;
  rep(i, 1, n) {
    ll a;
    cin >> a;
    s[i] = s[i - 1];
    if (!a_set.contains(a)) {
      s[i]++;
    }
    a_set.insert(a);
  }
  ll ans = 0;
  rep(i, 0, n) { ans += (i + 1) * s[i + 1] - (n - i) * s[i]; }
  cout << ans << el;
}
