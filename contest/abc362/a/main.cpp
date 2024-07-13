#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int r, g, b;
  string c;
  cin >> r >> g >> b >> c;
  int ans = min(r, g);
  if (c == "Red") {
    ans = min(g, b);
  } else if (c == "Green") {
    ans = min(r, b);
  }
  cout << ans << el;
  return 0;
}
