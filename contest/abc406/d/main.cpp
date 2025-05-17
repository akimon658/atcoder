#include <atcoder/all>
#include <bits/stdc++.h>

using namespace atcoder;
using namespace std;

typedef long double ld;
typedef long long ll;

const string el = "\n";
const string Yes = "Yes";
const string No = "No";

#define all(x) x.begin(), x.end()
#define rep(i, min, sup)                                                       \
  for (int i = static_cast<int>(min); i < static_cast<int>(sup); i++)

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int h, w, n;
  input(h, w, n);
  vector<set<int>> garbage_row(h), garbage_col(w);
  rep(i, 0, n) {
    int x, y;
    input(x, y);
    x--;
    y--;
    garbage_row[x].insert(y);
    garbage_col[y].insert(x);
  }
  int q;
  input(q);
  rep(i, 0, q) {
    int q_type, pos;
    input(q_type, pos);
    pos--;
    if (q_type == 1) {
      cout << garbage_row[pos].size() << el;
      for (auto it = garbage_row[pos].begin(); it != garbage_row[pos].end();
           it++) {
        int val_to_del = *it;
        garbage_col[val_to_del].erase(pos);
      }
      garbage_row[pos].clear();
    } else {
      cout << garbage_col[pos].size() << el;
      for (auto it = garbage_col[pos].begin(); it != garbage_col[pos].end();
           it++) {
        int val_to_del = *it;
        garbage_row[val_to_del].erase(pos);
      }
      garbage_col[pos].clear();
    }
  }
}
