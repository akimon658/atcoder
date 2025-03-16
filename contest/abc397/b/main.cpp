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

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s;
  input(s);
  char prev = s[0];
  int ans = 0;
  if (prev == 'o') {
    ans++;
  }
  int cnt = 1;
  rep(i, 1, s.length()) {
    if (s[i] == prev) {
      cnt++;
    } else {
      ans += cnt - 1;
      cnt = 1;
    }
    prev = s[i];
  }
  ans += cnt - 1;
  if (prev == 'i') {
    ans++;
  }
  cout << ans << el;
}
