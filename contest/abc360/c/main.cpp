#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  int n;
  cin >> n;
  vector<ll> a(n), w(n);
  rep(i, 0, n) { cin >> a[i]; }
  rep(i, 0, n) { cin >> w[i]; }
  vector<ll> sum(n), maxW(n);
  rep(i, 0, n) {
    sum[a[i] - 1] += w[i];
    maxW[a[i] - 1] = max(maxW[a[i] - 1], w[i]);
  }
  ll ans = 0;
  rep(i, 0, n) { ans += sum[i] - maxW[i]; }
  cout << ans << "\n";
  return 0;
}
