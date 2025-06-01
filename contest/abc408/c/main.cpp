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
  int n, m;
  in(n, m);
  vector<pair<int, int>> borders(n);
  rep(i, 0, m) {
    int l, r;
    in(l, r);
    borders[l - 1].first++;
    borders[r - 1].second++;
  }
  int count = borders[0].first;
  int ans = count;
  rep(i, 1, n) {
    count += borders[i].first - borders[i - 1].second;
    ans = min(ans, count);
  }
  out(ans);
}
