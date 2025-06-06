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

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  input(n);
  vector<ll> a(n);
  rep(i, 0, n) { input(a[i]); }
  ll ans = 0;
  rep(i, 0, n) {
    auto itr = lower_bound(all(a), a[i] * 2);
    ll count = distance(itr, a.end());
    ans += count;
  }
  cout << ans << el;
}
