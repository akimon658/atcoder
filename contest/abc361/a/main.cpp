#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, k, x;
  cin >> n >> k >> x;
  rep(i, 0, n) {
    int a;
    cin >> a;
    cout << a << " ";
    if (i + 1 == k) {
      cout << x << " ";
    }
  }
  cout << el;
  return 0;
}
