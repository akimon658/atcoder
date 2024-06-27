#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll a, b;
  cin >> a >> b;
  ll ans = a / b;
  if (a % b) {
    ans++;
  }
  cout << ans << endl;
  return 0;
}
