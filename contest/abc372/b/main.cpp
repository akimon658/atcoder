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

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int m;
  cin >> m;
  vector<int> pow3(11);
  pow3[0] = 1;
  rep(i, 1, 11) { pow3[i] = 3 * pow3[i - 1]; }
  vector<int> a;
  rep(i, 0, 11) {
    if (m / pow3[10 - i] == 0) {
      continue;
    }
    int l = m / pow3[10 - i];
    rep(j, 0, l) { a.push_back(10 - i); }
    m %= pow3[10 - i];
  }
  cout << a.size() << el;
  rep(i, 0, a.size()) { cout << a[i] << " "; }
  cout << el;
}
