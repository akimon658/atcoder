#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  string s;
  cin >> s;
  pair<char, int> stat = {s[0], 1};
  int draw = 0;
  rep(i, 1, n) {
    if (stat.first != s[i]) {
      draw += stat.second / 2;
      pair<char, int> old_stat = stat;
      stat = {s[i], 0};
      if (old_stat.second % 2 == 0 &&
          ((old_stat.first == 'S' && s[i] == 'P') ||
           (old_stat.first == 'P' && s[i] == 'R') ||
           (old_stat.first == 'R' && s[i] == 'S'))) {
        draw++;
        stat.second--;
      }
    }
    stat.second++;
  }
  draw += stat.second / 2;
  cout << n - draw << el;
}
