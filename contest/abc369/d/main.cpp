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
  vector<ll> dp_e(n), dp_o(n);
  dp_e[0] = 0;
  dp_o[0] = a[0];
  rep(i, 1, n) {
    dp_e[i] = max(dp_e[i - 1], dp_o[i - 1] + 2 * a[i]);
    dp_o[i] = max(dp_e[i - 1] + a[i], dp_o[i - 1]);
  }
  cout << max(dp_e[n - 1], dp_o[n - 1]) << el;
}
