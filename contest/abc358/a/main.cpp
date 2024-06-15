#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  string s, t;
  cin >> s >> t;
  string ans = "No";
  if (s == "AtCoder" && t == "Land") {
    ans = "Yes";
  }
  cout << ans << "\n";
  return 0;
}
