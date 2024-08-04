#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  ll m;
  cin >> m;
  vector<ll> a(n);
  rep(i, 0, n) { cin >> a[i]; }
  sort(all(a));
  ll current = 0, sum = 0;
  rep(i, 0, n) {
    if (a[i] == current) {
      sum += a[i];
      continue;
    }
    current = a[i];
    if (sum + current * (n - i) > m) {
      cout << (m - sum) / (n - i) << el;
      return 0;
    }
    sum += current;
  }
  cout << "infinite" << el;
}
