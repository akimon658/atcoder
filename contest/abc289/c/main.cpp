#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<set<int>> a(m);
  rep(i, m) {
    int c;
    cin >> c;
    rep(j, c) {
      int input;
      cin >> input;
      a[i].insert(input);
    }
  }
  int cnt = 0;
  rep(bit, 1 << m) {
    set<int> st;
    rep(i, m) {
      if ((bit >> i) & 1) {
        for (auto tmp = a[i].begin(); tmp != a[i].end(); tmp++) {
          st.insert(*tmp);
        }
      }
    }
    if (st.size() == n) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
