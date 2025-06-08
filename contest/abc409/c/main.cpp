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
  int l, n;
  in(l, n);
  vector<int> p(n);
  p[0] = 0;
  rep(i, 1, n) {
    int d;
    in(d);
    p[i] = (p[i - 1] + d) % l;
  }
  sort(all(p));
}
