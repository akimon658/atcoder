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
  rep(i, 0, t) {
    int n;
    in(n);
    string s;
    in(s);
    vector<vector<int>> dp(n, vector<int>(3));
    dp[0][0] = s[0] - '0';
    dp[0][1] = s[0] == '0';
    dp[0][2] = INT_MAX;
    rep(j, 1, n) {
      dp[j][0] = dp[j - 1][0] + s[j] - '0';
      dp[j][1] = min(dp[j - 1][0], dp[j - 1][1]) + (s[j] == '0');
      dp[j][2] = min(dp[j - 1][1], dp[j - 1][2]) + s[j] - '0';
    }
    out(min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}));
  }
}
