#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  ll x_a, y_a, x_b, y_b, x_c, y_c;
  cin >> x_a >> y_a >> x_b >> y_b >> x_c >> y_c;
  ll aa = (x_b - x_c) * (x_b - x_c) + (y_b - y_c) * (y_b - y_c);
  ll bb = (x_a - x_c) * (x_a - x_c) + (y_a - y_c) * (y_a - y_c);
  ll cc = (x_a - x_b) * (x_a - x_b) + (y_a - y_b) * (y_a - y_b);
  string ans = "No";
  if (aa + bb == cc || bb + cc == aa || cc + aa == bb) {
    ans = "Yes";
  }
  cout << ans << el;
  return 0;
}
