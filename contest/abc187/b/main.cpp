#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) { cin >> x[i] >> y[i]; }
  int cnt = 0;
  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      if (abs(y[j] - y[i]) <= abs(x[j] - x[i])) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
