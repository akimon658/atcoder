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

int diff_count(vector<vector<char>> s, vector<vector<char>> t, int n) {
  int c = 0;
  rep(i, 0, n) {
    rep(j, 0, n) {
      if (s[i][j] != t[i][j]) {
        c++;
      }
    }
  }
  return c;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  input(n);
  vector<vector<char>> s0(n, vector<char>(n));
  vector<vector<char>> s1(n, vector<char>(n));
  vector<vector<char>> s2(n, vector<char>(n));
  vector<vector<char>> s3(n, vector<char>(n));
  rep(i, 0, n) {
    string s;
    input(s);
    rep(j, 0, n) {
      s0[i][j] = s[j];
      s1[j][n - i - 1] = s[j];
      s2[n - i - 1][n - j - 1] = s[j];
      s3[n - j - 1][i] = s[j];
    }
  }
  vector<vector<char>> t(n, vector<char>(n));
  rep(i, 0, n) {
    rep(j, 0, n) { input(t[i][j]); }
  }
  int c0 = diff_count(s0, t, n);
  int c1 = diff_count(s1, t, n);
  int c2 = diff_count(s2, t, n);
  int c3 = diff_count(s3, t, n);
  int ans = min(c0, c1 + 1);
  ans = min(ans, c2 + 2);
  ans = min(ans, c3 + 3);
  cout << ans << el;
}
