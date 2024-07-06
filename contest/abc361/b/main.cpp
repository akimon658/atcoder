#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
  int x_b = d - a;
  int y_b = e - b;
  int z_b = f - c;
  vector<tuple<int, int, int>> points = {
      {g - a, k - b, l - c}, {j - a, k - b, l - c}, {j - a, k - b, i - c},
      {j - a, k - b, i - c}, {g - a, h - b, l - c}, {j - a, h - b, l - c},
      {g - a, h - b, i - c}, {j - a, h - b, i - c}};
  string ans = "No";
  rep(i, 0, 8) {
    auto [x, y, z] = points[i];
    if (abs(x) < abs(x_b) && abs(y) < abs(y_b) && abs(z) < abs(z_b) &&
        x * x_b > 0 && y * y_b > 0 && z * z_b > 0) {
      ans = "Yes";
      break;
    }
  }
  x_b = j - g;
  y_b = k - h;
  z_b = l - i;
  points = {{a - g, e - h, f - i}, {d - g, e - h, f - i}, {a - g, e - h, c - i},
            {d - g, e - h, c - i}, {a - g, b - h, f - i}, {d - g, b - h, f - i},
            {a - g, b - h, c - i}, {d - g, b - h, c - i}};
  rep(i, 0, 8) {
    auto [x, y, z] = points[i];
    if (abs(x) < abs(x_b) && abs(y) < abs(y_b) && abs(z) < abs(z_b) &&
        x * x_b > 0 && y * y_b > 0 && z * z_b > 0) {
      ans = "Yes";
      break;
    }
  }
  if (a == g && b == h && c == i && d == j && e == k && f == l) {
    ans = "Yes";
  }
  cout << ans << el;
  return 0;
}
