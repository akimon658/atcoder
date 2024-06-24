#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == '1') {
      cout << "0";
    } else {
      cout << "1";
    }
  }
  cout << endl;
  return 0;
}
