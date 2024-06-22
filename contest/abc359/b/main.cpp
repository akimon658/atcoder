#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  int cnt = 0;
  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < 2 * n - 2; i++) {
    if (a[i] == a[i + 2]) {
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
