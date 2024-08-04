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
  vector<ll> a(n), s(n);
  rep(i, 0, n) {
    cin >> a[i];
    if (i == 0) {
      s[0] = a[0];
    } else {
      s[i] = a[i] ^ s[i - 1];
    }
  }
  rep(i, 0, n - 1) {}
}
