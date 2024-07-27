#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int h, w, s_i, s_j;
  cin >> h >> w >> s_i >> s_j;
  pair<int, int> pos = {s_i - 1, s_j - 1};
  vector<string> c(h);
  rep(i, 0, h) { cin >> c[i]; }
  string x;
  cin >> x;
  rep(i, 0, x.size()) {
    switch (x[i]) {
    case 'L':
      if (pos.second > 0 && c[pos.first][pos.second - 1] == '.') {
        pos.second--;
      }
      break;
    case 'R':
      if (pos.second < w - 1 && c[pos.first][pos.second + 1] == '.') {
        pos.second++;
      }
      break;
    case 'U':
      if (pos.first > 0 && c[pos.first - 1][pos.second] == '.') {
        pos.first--;
      }
      break;
    default:
      if (pos.first < h - 1 && c[pos.first + 1][pos.second] == '.') {
        pos.first++;
      }
    }
  }
  cout << pos.first + 1 << " " << pos.second + 1 << el;
  return 0;
}
