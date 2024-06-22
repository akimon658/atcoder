#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  ll sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  if (sx % 2 != sy % 2) {
    sx--;
  }
  if (tx % 2 != ty % 2) {
    tx--;
  }
  ll dx = abs(sx - tx);
  ll dy = abs(sy - ty);
  ll ans = dy;
  if (dx > dy) {
    ans += (dx - dy) / 2;
  }
  cout << ans << "\n";
  return 0;
}
