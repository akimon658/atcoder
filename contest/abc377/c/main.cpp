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

ll n;
set<pair<ll, ll>> cannot_place;

void add_if_possible(pair<ll, ll> p) {
  if (1 <= p.first && p.first <= n && 1 <= p.second && p.second <= n) {
    cannot_place.insert(p);
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int m;
  cin >> n >> m;
  rep(i, 0, m) {
    ll a, b;
    cin >> a >> b;
    add_if_possible({a, b});
    add_if_possible({a + 2, b + 1});
    add_if_possible({a + 1, b + 2});
    add_if_possible({a - 1, b + 2});
    add_if_possible({a - 2, b + 1});
    add_if_possible({a - 2, b - 1});
    add_if_possible({a - 1, b - 2});
    add_if_possible({a + 1, b - 2});
    add_if_possible({a + 2, b - 1});
  }
  cout << n * n - cannot_place.size() << el;
}
