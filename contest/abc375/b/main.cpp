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
  int n;
  cin >> n;
  vector<pair<ll, ll>> point(n + 2);
  point[0] = {0, 0};
  rep(i, 1, n + 1) { cin >> point[i].first >> point[i].second; }
  point[n + 1] = {0, 0};
  double cost = 0;
  rep(i, 1, n + 2) {
    cost += hypot(point[i].first - point[i - 1].first,
                  point[i].second - point[i - 1].second);
  }
  cout << setprecision(21) << cost << el;
}
