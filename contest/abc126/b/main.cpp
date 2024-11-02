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

bool is_mm(int n) { return 1 <= n && n <= 12; }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int s;
  cin >> s;
  int first = s / 100;
  int second = s % 100;
  string ans = "NA";
  if (!is_mm(first) && is_mm(second)) {
    ans = "YYMM";
  }
  if (is_mm(first) && !is_mm(second)) {
    ans = "MMYY";
  }
  if (is_mm(first) && is_mm(second)) {
    ans = "AMBIGUOUS";
  }
  cout << ans << el;
}
