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
  string s;
  input(s);
  ll sum = 0;
  for (int i = s.size() - 1; i >= 0; i--) {
    ll d = s[i] - '0';
    ll r = (d - sum) % 10;
    if (r < 0) {
      r += 10;
    }
    sum += r;
  }
  sum += s.size();
  cout << sum << el;
}
