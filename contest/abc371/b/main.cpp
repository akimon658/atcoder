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
  int n, m;
  cin >> n >> m;
  vector<bool> has_male(n);
  rep(i, 0, m) {
    int a;
    char b;
    cin >> a >> b;
    a--;
    string ans = "No";
    if (b == 'M') {
      if (!has_male[a]) {
        ans = "Yes";
      }
      has_male[a] = true;
    }
    cout << ans << el;
  }
}
