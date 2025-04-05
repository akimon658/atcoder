#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

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
  ll n;
  int m;
  input(n, m);
  ll x = 0;
  ll pow = 1;
  rep(i, 0, m + 1) {
    x += pow;
    if (x > 1000000000) {
      cout << "inf" << el;
      return 0;
    }
    pow *= n;
  }
  cout << x << el;
}
