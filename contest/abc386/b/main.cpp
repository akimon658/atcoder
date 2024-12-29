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
  string s;
  cin >> s;
  int cnt = 0;
  bool is_zero = false;
  rep(i, 0, s.size()) {
    if (s[i] != '0') {
      cnt++;
      is_zero = false;
      continue;
    }
    if (!is_zero) {
      cnt++;
      is_zero = true;
      continue;
    }
    is_zero = false;
  }
  cout << cnt << el;
}
