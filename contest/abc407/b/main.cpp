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
  int x, y;
  input(x, y);
  int cnt = 0;
  rep(i, 1, 7) {
    rep(j, 1, 7) {
      if (i + j < x && abs(i - j) < y) {
        cnt++;
      }
    }
  }
  cout << setprecision(16) << 1.0 - (double)cnt / 36.0 << el;
}
