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
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  string abc = "ABC";
  int count = 0;
  rep(i, 0, n - 2) {
    if (s.substr(i, 3) == abc) {
      count++;
    }
  }
  rep(i, 0, q) {
    int x;
    char c;
    cin >> x >> c;
    x--;
    char original_char = s[x];
    s[x] = c;
    if (original_char == c) {
      cout << count << el;
      continue;
    }
    int diff = 0;
    if (x >= 2 && x < n && s.substr(x - 2, 3) == abc) {
      diff++;
    }
    if (x >= 1 && x < n - 1 && s.substr(x - 1, 3) == abc) {
      diff++;
    }
    if (x < n - 2 && s.substr(x, 3) == abc) {
      diff++;
    }
    if (x >= 2 && x < n && s.substr(x - 2, 3) != abc) {
      s[x] = original_char;
      if (s.substr(x - 2, 3) == abc) {
        diff--;
      }
      s[x] = c;
    }
    if (x >= 1 && x < n - 1 && s.substr(x - 1, 3) != abc) {
      s[x] = original_char;
      if (s.substr(x - 1, 3) == abc) {
        diff--;
      }
      s[x] = c;
    }
    if (x < n - 2 && s.substr(x, 3) != abc) {
      s[x] = original_char;
      if (s.substr(x, 3) == abc) {
        diff--;
      }
      s[x] = c;
    }
    count += diff;
    cout << count << el;
  }
}
