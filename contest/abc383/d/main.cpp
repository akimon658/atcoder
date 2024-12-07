#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll n;
  cin >> n;
  ll max_prime = sqrt(n / 4);
  vector<bool> is_prime(max_prime + 1, true);
  vector<ll> prime;
  rep(i, 2, max_prime + 1) {
    if (is_prime[i]) {
      for (int j = 2 * i; j <= max_prime; j += i) {
        is_prime[j] = false;
      }
      prime.push_back(i);
    }
  }
  int count = 0;
  int max_idx = 0;
  rep(i, 0, prime.size()) {
    try {
      if (pow(prime[i], 8) <= n) {
        count++;
      }
    } catch (runtime_error _) {
    }
    while (i >= 1 && pow(prime[max_idx], 2) * pow(prime[i], 2) > n) {
      max_idx--;
      if (max_idx < 0) {
        break;
      }
    }
    if (max_idx < 0) {
      break;
    }
    if (max_idx != i && pow(prime[max_idx], 2) * pow(prime[i], 2) <= n) {
      count += max_idx + 1;
    }
    if (max_idx + 1 == i) {
      max_idx = i;
    }
  }
  cout << count << el;
}
