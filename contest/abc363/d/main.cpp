#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

ll pow10(ll d) {
  ll result = 1;
  rep(i, 0, d) { result *= 10; }
  return result;
}

int main() {
  ll n;
  cin >> n;
  vector<ll> num_x = {9, 9};
  int d = 0;
  if (n <= 19) {
    d = 2;
  }
  if (n <= 10) {
    cout << n - 1 << el;
    return 0;
  }
  ll sum = 19;
  int new_d = 3;
  while (d == 0) {
    num_x.push_back(9 * (num_x[num_x.size() - 2] + 1));
    sum += num_x[num_x.size() - 1];
    if (sum >= n) {
      d = new_d;
      break;
    }
    new_d++;
  }
  num_x[0] = 10;
  vector<int> x(d);
  for (int i = 0, j = d - 1; i < j; i++, j--) {
    n -= num_x[d - 2];
    ll val = n / pow10(d) + 1;
    x[i] = val;
    x[j] = val;
    n %= pow10(d) + 1;
    d -= 2;
  }
  rep(i, 0, x.size()) { cout << x[i]; }
  cout << el;
  return 0;
}
