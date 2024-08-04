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
  vector<pair<ll, int>> a(n);
  rep(i, 0, n) {
    ll tmp;
    cin >> tmp;
    a[i] = {tmp, i};
  }
  sort(all(a), greater<pair<ll, int>>());
  cout << a[1].second + 1 << el;
}
