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

int n;
ll a, b;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  input(n, a, b);
  vector<ll> x(n);
  rep(i, 0, n) { input(x[i]); }
  ll sum = 0;
  rep(i, 1, n) { sum += min(a * (x[i] - x[i - 1]), b); }
  cout << sum << el;
}
