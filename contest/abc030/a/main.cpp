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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  string ans = "DRAW";
  if (b * c > a * d) {
    ans = "TAKAHASHI";
  } else if (b * c < a * d) {
    ans = "AOKI";
  }
  cout << ans << el;
}
