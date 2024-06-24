#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, m;
  vector<int> c(m);
  vector<set<int>> a(m);
  rep(i, m) {
    cin >> c[i];
    rep(j, n) {
      int input;
      cin >> input;
      a[i].insert(input);
    }
  }
  int cnt = 0;
  for (int bit = 1; bit <= (1 << m); bit++) {
    set<int> st;
    rep(i, m) {
      if ((bit >> i) & 1) {
        st.merge(a[i]);
      }
    }
    bool ok = true;
    rep(i, n) {
      if (!st.contains(i + 1)) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
