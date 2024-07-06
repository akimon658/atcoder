#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n;
  cin >> n;
  vector<pair<ll, int>> a(n);
  rep(i, 0, n) {
    ll tmpA;
    cin >> tmpA;
    a[i] = {tmpA, i + 1};
  }
  sort(all(a), [](pair<ll, int> l, pair<ll, int> r) { return l > r; });
  cout << a[1].second << "\n";
  return 0;
}
