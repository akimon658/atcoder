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
  for (ll i = static_cast<ll>(min); i < static_cast<ll>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll n;
  input(n);
  vector<ll> dp(n + 1);
  vector<ll> until(n);
  dp[0] = 0;
  rep(i, 0, n) {
    ll a;
    input(a);
    a += dp[i];
    dp[i + 1] = dp[i] - until[i];
    if (a >= 1) {
      dp[i + 1] += 1;
    }
    until[min(n - 1, a + i)]++;
    cout << max((ll)0, a - n + i + 1) << " ";
  }
  cout << el;
}
