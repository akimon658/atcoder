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
  int n;
  string s;
  cin >> n >> s;
  int cnt = 0;
  rep(i, 0, n - 2) {
    if (s[i] == '#' && s[i + 2] == '#' && s[i + 1] == '.') {
      cnt++;
    }
  }
  cout << cnt << el;
}
