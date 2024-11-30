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
  int n, d;
  string s;
  cin >> n >> d >> s;
  int cnt = 0;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == '@') {
      s[i] = '.';
      cnt++;
      if (cnt == d) {
        break;
      }
    }
  }
  cout << s << el;
}
