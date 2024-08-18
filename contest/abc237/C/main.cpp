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
  string s;
  cin >> s;
  ll cnt_back = 0;
  while (s[s.length() - 1] == 'a') {
    cnt_back++;
    s.pop_back();
  }
  ll cnt_front = 0;
  rep(i, 0, s.length()) {
    if (s[i] != 'a') {
      cnt_front = i;
      break;
    }
  }
  if (cnt_front > cnt_back) {
    cout << "No" << el;
    return 0;
  }
  s = s.substr(cnt_front);
  for (int l = 0, r = s.length() - 1; l < r; l++, r--) {
    if (s[l] != s[r]) {
      cout << "No" << el;
      return 0;
    }
  }
  cout << "Yes" << el;
}
