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
  int n, k;
  cin >> n >> k;
  if (n % 2 == 0) {
    cout << n / 2 << " ";
    rep(i, 0, n) {
      rep(j, 0, k) {
        if (n - i == n / 2 && j == 0) {
          continue;
        }
        cout << n - i << " ";
      }
    }
  } else {
    rep(i, 0, k) { cout << (n + 1) / 2 << " "; }
    if (n == 1) {
      goto FINISH;
    }
    cout << n / 2 << " ";
    rep(i, 0, n) {
      rep(j, 0, k) {
        if (n - i == (n + 1) / 2) {
          break;
        }
        if (n - i == n / 2 && j == 0) {
          continue;
        }
        cout << n - i << " ";
      }
    }
  }
FINISH:
  cout << el;
}
