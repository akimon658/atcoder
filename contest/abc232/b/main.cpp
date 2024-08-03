#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  string s, t;
  cin >> s >> t;
  int k = (int(s[0] - t[0]) + 26) % 26;
  rep(i, 1, s.size()) {
    if (char((int(t[i] - 'a') + k) % 26) + 'a' != s[i]) {
      cout << "No" << el;
      return 0;
    }
  }
  cout << "Yes" << el;
}
