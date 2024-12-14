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
  ll s;
  cin >> s;
  vector<ll> a(2 * n);
  rep(i, 0, n) {
    ll tmp_a;
    cin >> tmp_a;
    a[i] = tmp_a;
    a[i + n] = tmp_a;
  }
  vector<ll> sum(2 * n + 1);
  sum[0] = 0;
  rep(i, 0, 2 * n) { sum[i + 1] = sum[i] + a[i]; }
  s %= sum[n];
  if (s == 0) {
    cout << Yes << el;
    return 0;
  }
  int l = 0, r = 1;
  while (true) {
    if (r > 2 * n) {
      cout << No << el;
      return 0;
    }
    while (r < 2 * n && sum[r] - sum[l] < s) {
      r++;
    }
    while (l + 1 < r && sum[r] - sum[l] > s) {
      l++;
    }
    if (sum[r] - sum[l] == s) {
      cout << Yes << el;
      return 0;
    }
    if (l + 1 == r) {
      l++;
    }
    r++;
  }
}
