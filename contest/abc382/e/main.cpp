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
  int n, x;
  cin >> n >> x;
  vector<double> p(n);
  rep(i, 0, n) {
    double tmp;
    cin >> tmp;
    p[i] = tmp / 100;
  }
  vector<vector<double>> dp(n + 1, vector<double>(n + 1));
  vector<double> g(n + 1);
  dp[0][0] = 1;
  rep(i, 1, n + 1) { dp[i][0] = (1 - p[i - 1]) * dp[i - 1][0]; }
  g[0] = dp[n][0];
  rep(j, 1, n + 1) {
    rep(i, 1, n + 1) {
      dp[i][j] = p[i - 1] * dp[i - 1][j - 1] + (1 - p[i - 1]) * dp[i - 1][j];
    }
    g[j] = dp[n][j];
  }
  vector<double> f(x + 1);
  rep(i, 1, x + 1) {
    rep(j, 1, n + 1) { f[i] += g[j] * f[max(i - j, 0)]; }
    f[i] += 1;
    f[i] /= 1 - g[0];
  }
  cout << setprecision(16) << f[x] << el;
}
