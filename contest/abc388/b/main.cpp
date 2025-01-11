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
  int n, d;
  input(n, d);
  vector<int> t(n), l(n);
  rep(i, 0, n) { input(t[i], l[i]); }
  rep(k, 1, d + 1) {
    int ans = 0;
    rep(i, 0, n) { ans = max(ans, (l[i] + k) * t[i]); }
    cout << ans << el;
  }
}
