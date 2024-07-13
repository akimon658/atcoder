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
  cin >> n;
  vector<tuple<ll, ll, int>> d(n);
  rep(i, 0, n) {
    ll l, r;
    cin >> l >> r;
    d[i] = {l, r, i};
  }
  vector<tuple<ll, ll, int>> d_inc = d;
  sort(all(d_inc));
  vector<tuple<ll, ll, int>> d_dec = d;
  sort(all(d_dec), [](tuple<ll, ll, int> x, tuple<ll, ll, int> y) {
    return get<1>(x) > get<1>(y);
  });
  vector<ll> x(n);
  rep(i, 0, n / 2) {
    if (0 <= get<1>(d_inc[i]) && get<0>(d_dec[i]) <= 0) {
      x[get<2>(d_inc[i])] = 0;
      x[get<2>(d_dec[i])] = 0;
    }
  }
  return 0;
}
