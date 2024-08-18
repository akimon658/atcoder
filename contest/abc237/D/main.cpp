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
  string s;
  cin >> s;
  list<int> l;
  l.push_front(0);
  auto itr = l.begin();
  rep(i, 0, n) {
    switch (s[i]) {
    case 'L':
      l.insert(itr, i + 1);
      itr--;
      break;
    default:
      itr++;
      l.insert(itr, i + 1);
      itr--;
    }
  }
  for (int e : l) {
    cout << e << " ";
  }
  cout << el;
}
