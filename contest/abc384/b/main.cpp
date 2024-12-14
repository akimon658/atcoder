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

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, r;
  cin >> n >> r;
  rep(i, 0, n) {
    int d, a;
    cin >> d >> a;
    if ((d == 1 && 1600 <= r && r <= 2799) ||
        (d == 2 && 1200 <= r && r <= 2399)) {
      r += a;
    }
  }
  cout << r << el;
}
