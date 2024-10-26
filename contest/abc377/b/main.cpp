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
  pair<vector<int>, set<int>> not_place;
  rep(i, 0, 8) {
    string s;
    cin >> s;
    bool contains = false;
    rep(j, 0, 8) {
      if (s[j] == '#') {
        contains = true;
        not_place.second.insert(j);
      }
    }
    if (contains) {
      not_place.first.push_back(i);
    }
  }
  int ans = (8 - not_place.first.size()) * (8 - not_place.second.size());
  cout << ans << el;
}
