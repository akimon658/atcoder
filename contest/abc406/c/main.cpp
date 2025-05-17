#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  input(n);
  vector<int> p(n);
  rep(i, 0, n) { input(p[i]); }
  vector<int> maximal, minimal;
  rep(i, 0, n) {
    if (i == 0 && p[0] < p[1]) {
      minimal.push_back(0);
      continue;
    }
    if (i + 1 == n && p[i - 1] < p[i]) {
      maximal.push_back(i);
      break;
    }
    if (p[i - 1] < p[i] && p[i] > p[i + 1]) {
      maximal.push_back(i);
    }
    if (p[i - 1] > p[i] && p[i] < p[i + 1]) {
      minimal.push_back(i);
    }
  }
  ll sum = 0;
  rep(iMin, 0, minimal.size() - 1) {
    int iMax =
        distance(maximal.begin(), lower_bound(all(maximal), minimal[iMin]));
    if (iMax + 1 >= (int)maximal.size()) {
      break;
    }
    ll d1 = maximal[iMax] - minimal[iMin];
    ll d2 = maximal[iMax + 1] - minimal[iMin + 1];
    sum += d1 * d2;
  }
  cout << sum << el;
}
