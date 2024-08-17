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
  string x;
  cin >> x;
  int cnt = 0;
  rep(i, 0, x.length()) {
    if (x[x.length() - i - 1] != '0' && x[x.length() - i - 1] != '.') {
      break;
    }
    cnt++;
    if (x[x.length() - i - 1] == '.') {
      break;
    }
  }
  cout << x.substr(0, x.length() - cnt) << el;
}
