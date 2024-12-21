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
  vector<int> h(n);
  rep(i, 0, n) { cin >> h[i]; }
  int result = 0;
  rep(margin, 1, n + 1) {
    rep(start, 0, margin) {
      int height = h[start];
      int count = 1;
      for (int i = start + margin; i < n; i += margin) {
        if (h[i] != height) {
          result = max(result, count);
          height = h[i];
          count = 0;
        }
        count++;
      }
      result = max(result, count);
    }
  }
  cout << result << el;
}
