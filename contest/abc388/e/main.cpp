#include <atcoder/all>
#include <bits/stdc++.h>
#include <ranges>

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

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  input(n);
  vector<ll> a(n);
  rep(i, 0, n) { input(a[i]); }
  auto ok = [&](int k) {
    rep(i, 0, k) {
      if (2 * a[i] > a[n - k + i]) {
        return false;
      }
    }
    return true;
  };
  cout << *ranges::partition_point(views::iota(0, n / 2 + 1), ok) - 1 << el;
}
