#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n, k;
  input(n, k);
  ll display = 1;
  ll pow_k = 1;
  rep(i, 0, k) { pow_k *= 10; }
  rep(i, 0, n) {
    ll a;
    input(a);
    if (a >= (pow_k + display - 1) / display) {
      display = 1;
    } else {
      display *= a;
    }
  }
  cout << display << el;
}
