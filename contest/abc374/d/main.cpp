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

typedef pair<int, int> point;

double dist(point p, point q) {
  int dx = p.first - q.first, dy = p.second - q.second;
  return sqrt(dx * dx + dy * dy);
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  double s, t;
  cin >> n >> s >> t;
  vector<pair<point, point>> line(n);
  rep(i, 0, n) {
    cin >> line[i].first.first >> line[i].first.second >>
        line[i].second.first >> line[i].second.second;
  }
  sort(all(line));
  double ans = DBL_MAX;
  do {
    rep(bit, 0, 1 << n) {
      double time = 0;
      point current = {0, 0};
      rep(i, 0, n) {
        point p = line[i].first, q = line[i].second;
        if (bit & (1 << i)) {
          swap(p, q);
        }
        time += dist(current, p) / s + dist(p, q) / t;
        current = q;
      }
      ans = min(ans, time);
    }
  } while (next_permutation(all(line)));
  cout << setprecision(12);
  cout << ans << el;
}
