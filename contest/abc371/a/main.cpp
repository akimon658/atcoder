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
  char ab, ac, bc;
  cin >> ab >> ac >> bc;
  char ans = 'A';
  if (ab == bc) {
    ans = 'B';
  } else if (ac != bc) {
    ans = 'C';
  }
  cout << ans << el;
}
