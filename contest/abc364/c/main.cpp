#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n;
  ll x, y;
  cin >> n >> x >> y;
  vector<ll> a(n), b(n);
  rep(i, 0, n) { cin >> a[i]; }
  rep(i, 0, n) { cin >> b[i]; }
  sort(all(a), greater<ll>());
  sort(all(b), greater<ll>());
  ll sum_a = 0, sum_b = 0;
  int cnt_a = 0, cnt_b = 0;
  rep(i, 0, n) {
    sum_a += a[i];
    cnt_a++;
    if (sum_a > x) {
      break;
    }
  }
  rep(i, 0, n) {
    sum_b += b[i];
    cnt_b++;
    if (sum_b > y) {
      break;
    }
  }
  cout << min(cnt_a, cnt_b) << el;
  return 0;
}
