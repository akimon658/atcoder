#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

using mint = modint998244353;

int main() {
  ll nRaw;
  cin >> nRaw;
  mint n(nRaw);
  int digits = to_string(nRaw).size();
  mint d = mint::raw(10).pow(digits);
  mint ans = n * (1 - d.pow(nRaw)) / (1 - d);
  cout << ans.val() << "\n";
  return 0;
}
