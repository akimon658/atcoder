#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> a(n), b(m);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  int aIndex = 0;
  ll sum = 0;
  for (int i = 0; i < m; i++) {
    if (aIndex == n) {
      sum = -1;
      break;
    }
    while (b[i] > a[aIndex]) {
      aIndex++;
      if (aIndex == n) {
        cout << -1 << "\n";
        return 0;
      }
    }
    sum += a[aIndex];
    aIndex++;
  }
  cout << sum << "\n";
  return 0;
}
