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
  double m;
  cin >> n >> m;
  double deg_h = 30 * (n % 12) + m / 2;
  double deg_m = 6 * m;
  double ans = max(deg_h, deg_m) - min(deg_h, deg_m);
  if (ans > 180) {
    ans = 360 - ans;
  }
  cout << ans << el;
}
