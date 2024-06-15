#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  int n, a;
  cin >> n >> a;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  int currentTime = 0;
  for (int i = 0; i < n; i++) {
    int ans;
    if (t[i] < currentTime) {
      ans = currentTime + a;
    } else {
      ans = t[i] + a;
    }
    currentTime = ans;
    cout << ans << "\n";
  }
  return 0;
}
