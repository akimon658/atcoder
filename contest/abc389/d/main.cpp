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
  int r;
  input(r);
  int max_j = r;
  ll count = 0;
  rep(i, 0, r) {
    auto ok = [&](int j) { return hypot(i + 0.5, j + 0.5) <= r; };
    max_j = *ranges::partition_point(views::iota(0, max_j), ok);
    if (max_j <= 0) {
      break;
    }
    count += max_j;
  }
  cout << (count - r + 1) * 4 - 3 << el;
}
