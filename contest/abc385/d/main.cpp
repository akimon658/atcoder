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
  int n, m;
  ll s_x, s_y;
  cin >> n >> m >> s_x >> s_y;
  set<pair<ll, ll>> houses;
  set<pair<ll, ll>> houses_inv;
  rep(i, 0, n) {
    ll x, y;
    cin >> x >> y;
    houses.insert({x, y});
    houses_inv.insert({y, x});
  }
  int count = 0;
  rep(i, 0, m) {
    char d;
    ll c;
    cin >> d >> c;
    ll next_x = s_x;
    ll next_y = s_y;
    switch (d) {
    case 'U':
      next_y += c;
      break;
    case 'D':
      next_y -= c;
      break;
    case 'L':
      next_x -= c;
      break;
    default:
      next_x += c;
    }
    pair<ll, ll> original_pair = {s_x, s_y};
    pair<ll, ll> original_pair_inv = {s_y, s_x};
    pair<ll, ll> new_pair = {next_x, next_y};
    pair<ll, ll> new_pair_inv = {next_y, next_x};
    if (s_x == next_x) {
      for (auto itr = houses.lower_bound(min(original_pair, new_pair));
           itr != houses.upper_bound(max(original_pair, new_pair)) &&
           itr != houses.end();) {
        count++;
        houses_inv.erase({itr->second, itr->first});
        itr = houses.erase(itr);
      }
    } else {
      for (auto itr =
               houses_inv.lower_bound(min(original_pair_inv, new_pair_inv));
           itr !=
               houses_inv.upper_bound(max(original_pair_inv, new_pair_inv)) &&
           itr != houses_inv.end();) {
        count++;
        houses.erase({itr->second, itr->first});
        itr = houses_inv.erase(itr);
      }
    }
    s_x = next_x;
    s_y = next_y;
  }
  cout << s_x << ' ' << s_y << ' ' << count << el;
}
