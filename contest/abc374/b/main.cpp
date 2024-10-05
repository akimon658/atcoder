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
  string s, t;
  cin >> s >> t;
  int ans = 0;
  rep(i, 0, s.length()) {
    if (i == t.length()) {
      ans = i + 1;
      break;
    }
    if (s[i] != t[i]) {
      ans = i + 1;
      break;
    }
  }
  if (ans == 0 && s.length() < t.length()) {
    ans = s.length() + 1;
  }
  cout << ans << el;
}
