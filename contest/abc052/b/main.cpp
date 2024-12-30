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

int n;
string s;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  input(n, s);
  int x = 0;
  int m = 0;
  rep(i, 0, n) {
    if (s[i] == 'I') {
      x++;
    } else {
      x--;
    }
    m = max(m, x);
  }
  cout << m << el;
}
