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
  vector<ll> h(n);
  rep(i, 0, n) { cin >> h[i]; }
  ll t = 0;
  rep(i, 0, n) {
    t += 3 * (h[i] / 5);
    h[i] %= 5;
    while (h[i] > 0) {
      t++;
      if (t % 3 == 0) {
        h[i] -= 3;
      } else {
        h[i] -= 1;
      }
    }
  }
  cout << t << el;
}
