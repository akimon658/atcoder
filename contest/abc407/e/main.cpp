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
  int t;
  input(t);
  rep(i, 0, t) {
    int n;
    input(n);
    vector<pair<ll, int>> a(2 * n);
    ll score = 0;
    rep(j, 0, 2 * n) {
      ll tmp;
      input(tmp);
      a[j] = {tmp, j};
      score += tmp;
    }
    sort(all(a));
    set<int> available;
    rep(j, 0, 2 * n) { available.insert(j); }
    int used_count = 0;
    rep(j, 0, 2 * n) {
      if (used_count == n) {
        break;
      }
      int ava = distance(available.begin(), available.lower_bound(a[j].second));
      if (ava < used_count + 1) {
        continue;
      }
      available.erase(a[j].second);
      used_count++;
      score -= a[j].first;
    }
    cout << score << el;
  }
}
