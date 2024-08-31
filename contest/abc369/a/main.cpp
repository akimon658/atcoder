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
  int a, b;
  cin >> a >> b;
  int ans = 2 + (a + b + 1) % 2;
  if (a == b) {
    ans = 1;
  }
  cout << ans << el;
}
