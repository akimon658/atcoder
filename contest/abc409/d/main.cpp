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
  int t;
  in(t);
  rep(j, 0, t) {
    int n;
    string s;
    in(n, s);
    string ans;
    int l = n;
    if (n == 1) {
      out(s);
      continue;
    }
    rep(i, 0, n - 1) {
      if (s[i] > s[i + 1]) {
        l = i;
        break;
      }
      ans.push_back(s[i]);
    }
    int r = n;
    rep(i, l + 1, n) {
      if (s[i] < s[l]) {
        ans.push_back(s[i]);
      } else {
        r = i;
        ans.push_back(s[l]);
        break;
      }
      if (i == n - 1) {
        r = n;
      }
    }
    if (r == n) {
      ans.push_back(s[l]);
    }
    rep(i, r, n) { ans.push_back(s[i]); }
    out(ans);
  }
}
