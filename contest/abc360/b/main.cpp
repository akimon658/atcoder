#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  string s, t;
  cin >> s >> t;
  set<int> wSet;
  rep(i, 1, s.size()) {
    if (s.size() / i == t.size()) {
      wSet.insert(i);
    }
  }
  string ans = "No";
  for (auto wItr = wSet.begin(); wItr != wSet.end(); wItr++) {
    int w = *wItr;
    rep(c, s.size() % w, w) {
      bool ok = true;
      rep(i, 0, t.size()) {
        if (s[c + w * i] != t[i]) {
          ok = false;
          break;
        }
      }
      if (ok) {
        ans = "Yes";
        goto END_FOR;
      }
    }
  }
END_FOR:
  cout << ans << "\n";
  return 0;
}
