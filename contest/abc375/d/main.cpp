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
  string s;
  cin >> s;
  vector<vector<ll>> sum(26, vector<ll>(s.size() + 1));
  rep(i, 0, s.size()) {
    rep(j, 0, 26) {
      sum[j][i + 1] = sum[j][i];
      if (s[i] - 'A' == j) {
        sum[j][i + 1]++;
      }
    }
  }
  ll ans = 0;
  rep(i, 1, s.size() - 1) {
    rep(j, 0, 26) { ans += sum[j][i] * (sum[j][s.size()] - sum[j][i + 1]); }
  }
  cout << ans << el;
}
