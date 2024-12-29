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
  int k;
  string s, t;
  cin >> k >> s >> t;
  if (s == t) {
    cout << Yes << el;
    return 0;
  }
  if (s.size() == t.size()) {
    bool found = false;
    rep(i, 0, s.size()) {
      if (s[i] != t[i]) {
        if (found) {
          cout << No << el;
          return 0;
        }
        found = true;
      }
    }
    cout << Yes << el;
    return 0;
  }
  if (s.size() > t.size()) {
    swap(s, t);
  }
  int m = s.size();
  int M = t.size();
  if (m + 1 != M) {
    cout << No << el;
    return 0;
  }
  rep(i, 0, m) {
    if (s[i] != t[i]) {
      string s2 = s;
      s2.insert(s2.begin() + i, t[i]);
      if (s2 == t) {
        cout << Yes << el;
        return 0;
      }
      t.erase(i, 1);
      if (s == t) {
        cout << Yes << el;
        return 0;
      }
      cout << No << el;
      return 0;
    }
  }
  cout << Yes << el;
}
