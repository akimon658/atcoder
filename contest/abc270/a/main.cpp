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
  int a, b;
  cin >> a >> b;
  int ans = 0;
  if (a >= 4 || b >= 4) {
    ans += 4;
    if (a >= 4) {
      a -= 4;
    }
    if (b >= 4) {
      b -= 4;
    }
  }
  if (a >= 2 || b >= 2) {
    ans += 2;
    if (a >= 2) {
      a -= 2;
    }
    if (b >= 2) {
      b -= 2;
    }
  }
  if (a >= 1 || b >= 1) {
    ans += 1;
  }
  cout << ans << el;
}
