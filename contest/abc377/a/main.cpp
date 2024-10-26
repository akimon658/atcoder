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
  set<char> input = {s[0], s[1], s[2]};
  string ans = Yes;
  if (!input.contains('A') || !input.contains('B') || !input.contains('C')) {
    ans = No;
  }
  cout << ans << el;
}
