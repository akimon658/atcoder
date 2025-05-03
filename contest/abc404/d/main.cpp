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

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, m;
  input(n, m);
  vector<ll> c(n);
  rep(i, 0, n) { input(c[i]); }
  vector<int> animal_exists(2 * m);
  rep(i, 0, m) {
    int k;
    input(k);
    rep(j, 0, k) {
      int a;
      input(a);
      animal_exists[(a - 1)] |= (1 << (2 * i));
    }
  }
  ll ans = LLONG_MAX;
  rep(i, 0, 1 << (2 * n)) {
    ll sum = 0;
    vector<int> count(m);
    int can_see = 0;
    rep(j, 0, 2 * n) {
      int zoo = j;
      if (zoo >= n) {
        zoo -= n;
      }
      if (i & (1 << j)) {
        sum += c[zoo];
        if ((can_see | animal_exists[zoo]) == can_see) {
          can_see |= (animal_exists[zoo] << 1);
        } else {
          can_see |= animal_exists[zoo];
        }
      }
    }
    if (can_see == (1 << (2 * m)) - 1) {
      ans = min(ans, sum);
    }
  }
  cout << ans << el;
}
