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
  int n;
  cin >> n;
  vector<int> t(n);
  int ans;
  cin >> t[0] >> ans;
  rep(i, 1, n) {
    int v;
    cin >> t[i] >> v;
    ans -= min(ans, t[i] - t[i - 1]);
    ans += v;
  }
  cout << ans << el;
}
