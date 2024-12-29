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

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
  return a.first < b.first && a.second < b.second;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  ll n, m;
  cin >> n >> m;
  set<pair<ll, ll>, decltype(&cmp)> black(&cmp), white(&cmp);
  vector<pair<ll, ll>> whites;
  rep(i, 0, m) {
    ll x, y;
    cin >> x >> y;
    char c;
    cin >> c;
    if (c == 'W' && (black.lower_bound({x, y}) != black.end())) {
      cout << No << el;
      return 0;
    }
    if (c == 'W') {
      whites.push_back({x, y});
    } else {
      black.insert({x, y});
    }
  }
  rep(i, 0, whites.size()) {
    if (black.lower_bound(whites[i]) != black.end()) {
      cout << No << el;
      return 0;
    }
  }
  cout << Yes << el;
}
