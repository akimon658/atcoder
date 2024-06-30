#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  int n, d;
  cin >> n >> d;
  int maxCap = 2 * d + 1;
  int ans = n / maxCap;
  if (n % maxCap) {
    ans++;
  }
  cout << ans << "\n";
  return 0;
}
