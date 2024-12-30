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

ll xor_max = 0;
ll xor_all = 0;
int n, k;
vector<ll> a;

void f(vector<int> indexes, int i, bool rev, ll xor_current) {
  if ((!rev && (int)indexes.size() == k) ||
      (rev && (int)indexes.size() == n - k)) {
    if (rev) {
      xor_max = max(xor_max, xor_all ^ xor_current);
    } else {
      xor_max = max(xor_max, xor_current);
    }
    return;
  }
  if (i == n) {
    return;
  }
  f(indexes, i + 1, rev, xor_current);
  indexes.emplace_back(i);
  f(indexes, i + 1, rev, xor_current ^ a[i]);
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  cin >> n >> k;
  a.resize(n);
  rep(i, 0, n) { cin >> a[i]; }
  if (k <= n / 2) {
    f({}, 0, false, 0);
  } else {
    rep(i, 0, n) { xor_all ^= a[i]; }
    f({}, 0, true, 0);
  }
  cout << xor_max << el;
}
