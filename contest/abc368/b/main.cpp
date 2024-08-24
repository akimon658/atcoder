#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) { cin >> a[i]; }
  int ans;
  for (int i = 0;; i++) {
    sort(all(a), greater());
    if (a[1] <= 0) {
      ans = i;
      break;
    }
    a[0]--;
    a[1]--;
  }
  cout << ans << el;
}
