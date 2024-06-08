#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int ans = n;
  for (int i = 0; i < n; i++) {
    m -= h[i];
    if (m < 0) {
      ans = i;
      break;
    }
  }
  cout << ans << "\n";
  return 0;
}
