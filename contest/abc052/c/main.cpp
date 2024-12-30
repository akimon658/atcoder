#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;
typedef modint1000000007 mint;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int n;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  input(n);
  vector<bool> is_prime(n + 1, true);
  vector<int> prime_count(n + 1);
  rep(i, 2, n + 1) {
    if (is_prime[i]) {
      for (int j = i * 2; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }
  rep(i, 2, n + 1) {
    if (!is_prime[i]) {
      continue;
    }
    rep(j, i, n + 1) {
      int tmp = j;
      while (tmp % i == 0) {
        prime_count[i]++;
        tmp /= i;
      }
    }
  }
  mint sum = 1;
  rep(i, 2, n + 1) { sum *= prime_count[i] + 1; }
  cout << sum.val() << el;
}
