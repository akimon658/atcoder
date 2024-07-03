#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n;
  cin >> n;
  int cntFor = 0;
  rep(i, 0, n) {
    string s;
    cin >> s;
    if (s == "For") {
      cntFor++;
    }
  }
  string ans = "No";
  if (cntFor > n / 2) {
    ans = "Yes";
  }
  cout << ans << "\n";
  return 0;
}
