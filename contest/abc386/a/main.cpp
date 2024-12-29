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
  vector<int> input(4);
  rep(i, 0, 4) { cin >> input[i]; }
  sort(all(input));
  int x = input[0];
  int y = input[3];
  if (x == y) {
    cout << No << el;
    return 0;
  }
  if ((input[1] == x && input[2] == y) || input[1] == y || input[2] == x) {
    cout << Yes << el;
    return 0;
  }
  cout << No << el;
}
