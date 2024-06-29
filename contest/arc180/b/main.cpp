#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n);
  rep(i, n) { cin >> p[i]; }
  vector<int> l, r;
  l.reserve(n * n);
  r.reserve(n * n);
  while (true) {
    bool ok = false;
    for (int depth = 1; depth < n; depth++) {
      rep(i, n - k) {
        if (p[i] - depth < 1) {
          continue;
        }
        for (int j = i + k; j < n; j++) {
          if (p[j] == p[i] - depth) {
            ok = true;
            swap(p[i], p[j]);
            l.push_back(i + 1);
            r.push_back(j + 1);
            break;
          }
        }
        if (ok) {
          break;
        }
      }
      if (ok) {
        break;
      }
    }
    if (!ok) {
      break;
    }
  }
  cout << l.size() << "\n";
  rep(i, l.size()) { cout << l[i] << " " << r[i] << "\n"; }
  return 0;
}
