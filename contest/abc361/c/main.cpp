#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, 0, n) { cin >> a[i]; }
  sort(all(a));
  ll ans = a[n - 1];
  rep(i, 0, k + 1) { ans = min(ans, a[i + n - k - 1] - a[i]); }
  cout << ans << el;
  return 0;
}
