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
  int x, y, z;
  cin >> x >> y >> z;
  int ans = abs(x);
  if (x * y > 0 && abs(x) > abs(y)) {
    if (y * z > 0 && abs(y) < abs(z)) {
      ans = -1;
    }
    if (y * z < 0) {
      ans += 2 * abs(z);
    }
  }
  cout << ans << el;
}
