#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void in(T &...a) { (cin >> ... >> a); }
template <class T> void out(T a) { cout << a << el; }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  // cout << setprecision(numeric_limits<double>::max_digits10);
  int n;
  in(n);
  vector<ll> a(n);
  rep(i, 0, n) { in(a[i]); }
  sort(all(a), greater());
  for (int j = 0; j < n; j++) {
    ll x = a[j];
    int count = 0;
    rep(i, 0, n) {
      if (a[i] >= x) {
        count++;
      }
    }
    if (count >= x) {
      out(x);
      return 0;
    }
  }
}
