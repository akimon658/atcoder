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
  int sum = 0;
  int prevL = 0, prevR = 0;
  rep(i, 0, n) {
    int a;
    char s;
    cin >> a >> s;
    if (s == 'L') {
      if (prevL > 0) {
        sum += abs(prevL - a);
      }
      prevL = a;
    } else {
      if (prevR > 0) {
        sum += abs(prevR - a);
      }
      prevR = a;
    }
  }
  cout << sum << el;
}
