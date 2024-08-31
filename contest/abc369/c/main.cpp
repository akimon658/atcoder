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
  vector<ll> a(n);
  rep(i, 0, n) { cin >> a[i]; }
  if (n == 1) {
    cout << 1 << el;
    return 0;
  }
  ll d = a[1] - a[0];
  ll length = 2;
  ll ans = 0;
  rep(i, 2, n) {
    if (a[i] - a[i - 1] == d) {
      length++;
    }
    if (a[i] - a[i - 1] != d) {
      ans += length * (length - 1) / 2;
      d = a[i] - a[i - 1];
      length = 2;
    }
    if (i + 1 == n) {
      ans += length * (length - 1) / 2;
    }
  }
  if (n == 2) {
    ans = 1;
  }
  ans += n;
  cout << ans << el;
}
