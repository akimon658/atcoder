#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, 0, n) { cin >> a[i]; }
  vector<int> sortedA(n);
  copy(a.begin(), a.end(), sortedA.begin());
  sort(sortedA.begin(), sortedA.end(), greater<int>());
  rep(i, 0, n) {
    int ans = sortedA[0];
    if (a[i] == sortedA[0]) {
      ans = sortedA[1];
    }
    cout << ans << "\n";
  }
  return 0;
}
