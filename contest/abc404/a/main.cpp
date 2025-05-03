#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
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
  set<char> ss;
  rep(i, 0, s.length()) { ss.insert(s[i]); }
  string all = "abcdefghijklmnopqrstuvwxyz";
  rep(i, 0, all.length()) {
    if (!ss.contains(all[i])) {
      cout << all[i] << el;
      return 0;
    }
  }
}
