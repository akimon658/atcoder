#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  int n, q;
  cin >> n >> q;
  vector<ll> r(n);
  rep(i, 0, n) { cin >> r[i]; }
  sort(r.begin(), r.end());
  vector<ll> s(n);
  {
    ll sum = 0;
    rep(i, 0, n) {
      sum += r[i];
      s[i] = sum;
    }
  }
  rep(i, 0, q) {
    ll x;
    cin >> x;
    auto xMinItr = upper_bound(s.begin(), s.end(), x);
    int ans = distance(s.begin(), xMinItr);
    cout << ans << "\n";
  }
  return 0;
}
