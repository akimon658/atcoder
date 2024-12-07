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
  int h, w, d;
  cin >> h >> w >> d;
  vector<vector<char>> s(h, vector<char>(w));
  rep(i, 0, h) {
    rep(j, 0, w) { cin >> s[i][j]; }
  }
  int ans = 0;
  rep(i, 0, h) {
    rep(j, 0, w) {
      if (s[i][j] != '.') {
        continue;
      }
      rep(k, 0, h) {
        rep(l, 0, w) {
          if (s[k][l] != '.') {
            continue;
          }
          int count = 0;
          rep(m, 0, h) {
            rep(n, 0, w) {
              if (s[m][n] == '.' && (abs(i - m) + abs(j - n) <= d ||
                                     abs(k - m) + abs(l - n) <= d)) {
                count++;
              }
            }
          }
          ans = max(ans, count);
        }
      }
    }
  }
  cout << ans << el;
}
