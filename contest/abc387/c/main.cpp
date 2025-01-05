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

ll num_snake(ll n) {
  if (n == 0) {
    return 0;
  }
  string s = to_string(n);
  int digits = s.size();
  ll sum = 0;
  rep(i, 1, 10) { sum += pow(i, digits - 2); }
  ll max = s[0] - '0';
  if (max != 1) {
    sum += num_snake(max * pow(10, digits - 1) - 1);
  }
  rep(i, 1, digits) {
    if (max == 0) {
      break;
    }
    sum += pow(max, digits - i);
    max = min(max, (ll)(s[i] - '0'));
  }
  return sum;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll l, r;
  input(l, r);
  cout << num_snake(r) - num_snake(l - 1) << el;
}
