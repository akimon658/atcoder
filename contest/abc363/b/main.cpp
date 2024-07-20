#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, t, p;
  cin >> n >> t >> p;
  vector<int> l(n);
  rep(i, 0, n) { cin >> l[i]; }
  sort(all(l), greater<int>());
  int ans = max(0, t - l[p - 1]);
  cout << ans << el;
  return 0;
}
