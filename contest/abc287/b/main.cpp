#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, 0, n) { cin >> s[i]; }
  vector<string> t(m);
  rep(i, 0, m) { cin >> t[i]; }
  int cnt = 0;
  rep(i, 0, n) {
    rep(j, 0, m) {
      if (s[i].substr(3, 3) == t[j]) {
        cnt++;
        break;
      }
    }
  }
  cout << cnt << "\n";
  return 0;
}
