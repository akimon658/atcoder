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
  vector<string> s(n);
  rep(i, 0, n) { cin >> s[i]; }
  rep(i, 0, n) { cout << s[n - i - 1] << "\n"; }
  return 0;
}
