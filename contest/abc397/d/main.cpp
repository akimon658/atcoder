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

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll n;
  input(n);
  double n_3 = cbrt(n);
  for (ll d = 1; d < n_3; d++) {
    ll xp = round((3 * d * d + sqrt(3 * d * (4 * n - d * d * d))) /
                  (double)(6 * d));
    if (xp * xp * xp - (xp - d) * (xp - d) * (xp - d) == n) {
      cout << xp << " " << xp - d << el;
      return 0;
    }
    ll xn = round((3 * d * d - sqrt(3 * d * (4 * n - d * d * d))) /
                  (double)(6 * d));
    if (xn * xn * xn - (xn - d) * (xn - d) * (xn - d) == n) {
      cout << xn << " " << xn - d << el;
      return 0;
    }
  }
  cout << -1 << el;
}
