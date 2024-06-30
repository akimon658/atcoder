#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  ll a, m, l, r;
  cin >> a >> m >> l >> r;
  ll ans = (r - a) / m + (a - l) / m;
  if (l <= a && a <= r) {
    ans++;
  }
  cout << ans << "\n";
  return 0;
}
