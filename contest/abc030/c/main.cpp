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
  int n, m;
  ll x, y;
  cin >> n >> m >> x >> y;
  vector<ll> a(n);
  vector<ll> b(m);
  rep(i, 0, n) { cin >> a[i]; }
  rep(i, 0, m) { cin >> b[i]; }
  ll now = 0;
  int ia = 0, ib = 0, count = 0;
  while (true) {
    while (ia < n && a[ia] < now) {
      ia++;
    }
    if (ia >= n) {
      break;
    }
    now = a[ia] + x;
    while (ib < m && b[ib] < now) {
      ib++;
    }
    if (ib >= m) {
      break;
    }
    now = b[ib] + y;
    count++;
  }
  cout << count << el;
}
