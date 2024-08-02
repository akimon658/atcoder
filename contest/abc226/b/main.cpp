#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long long ll;

const string el = "\n";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  set<vector<ll>> s;
  rep(i, 0, n) {
    int l;
    cin >> l;
    vector<ll> a(l);
    rep(j, 0, l) { cin >> a[j]; }
    s.insert(a);
  }
  cout << s.size() << el;
}
