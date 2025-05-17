#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

using mint = modint998244353;

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

void recursive_comb(int *indexes, int s, int rest,
                    std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0)
      return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int *indexes = new int[k];
  recursive_comb(indexes, n - 1, k, f);
  delete[] indexes;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int t;
  input(t);
  rep(i, 0, t) {
    ll n;
    int k;
    input(n, k);
    int d = 1;
    ll n_copy = n;
    while (n_copy > 0) {
      n_copy /= 2;
      d++;
    }
    mint ans = 0;
    foreach_comb(d, k, [&](int *indexes) {
      ll sum = 0;
      for (int j = 0; j < k; j++) {
        sum += (1LL << indexes[j]);
      }
      if (sum <= n) {
        ans += sum;
      }
    });
    cout << ans.val() << el;
  }
}
