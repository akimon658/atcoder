#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  string s;
  cin >> s;
  bool hasRice = false;
  string ans = "No";
  rep(i, 0, s.size()) {
    if (s[i] == 'M' && hasRice) {
      ans = "Yes";
      break;
    }
    if (s[i] == 'R') {
      hasRice = true;
    }
  }
  cout << ans << "\n";
  return 0;
}
