#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int t;
  cin >> t;
  rep(i, 0, t) {
    int n;
    cin >> n;
    int cnt = 0;
    rep(j, 0, n) {
      ll a;
      cin >> a;
      cnt += a % 2;
    }
    cout << cnt << "\n";
  }
  return 0;
}
