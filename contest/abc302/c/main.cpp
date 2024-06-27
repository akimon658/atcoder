#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) { cin >> s[i]; }
  sort(s.begin(), s.end());
  string ans = "No";
  do {
    bool ok = true;
    rep(i, n - 1) {
      bool exists = false;
      rep(j, m) {
        bool almostEqual = true;
        rep(k, m) {
          if (j != k && s[i][k] != s[i + 1][k]) {
            almostEqual = false;
            break;
          }
        }
        if (almostEqual) {
          exists = true;
          break;
        }
      }
      if (!exists) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ans = "Yes";
      break;
    }
  } while (next_permutation(s.begin(), s.end()));
  cout << ans << endl;
  return 0;
}
