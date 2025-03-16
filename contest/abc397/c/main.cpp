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

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  input(n);
  vector<int> a(n);
  vector<int> a2(n);
  set<int> all;
  set<int> a1;
  rep(i, 0, n) {
    input(a[i]);
    a[i]--;
    a2[a[i]]++;
    all.insert(a[i]);
  }
  int a2_unique = all.size();
  int ans = 0;
  rep(i, 0, n) {
    if (a2[a[i]] > 0) {
      a2[a[i]]--;
      if (a2[a[i]] == 0) {
        a2_unique--;
      }
      a1.insert(a[i]);
      ans = max(ans, (int)(a1.size()) + a2_unique);
    }
  }
  cout << ans << el;
}
