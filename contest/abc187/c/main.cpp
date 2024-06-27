#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  set<string> s0, s1;
  rep(i, n) {
    string s;
    cin >> s;
    if (s[0] == '!') {
      s1.insert(s);
    } else {
      s0.insert(s);
    }
  }
  string ans = "satisfiable";
  for (auto i = s0.begin(); i != s0.end(); i++) {
    if (s1.contains("!" + *i)) {
      ans = *i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
