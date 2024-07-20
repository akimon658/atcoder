#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  sort(all(s));
  int cnt = 0;
  do {
    rep(i, 0, n - k + 1) {
      string substr = s.substr(i, k);
      bool is_palindromic = true;
      for (int j = 0, l = k - 1; j < l; j++, l--) {
        if (substr[j] != substr[l]) {
          is_palindromic = false;
          break;
        }
      }
      if (is_palindromic) {
        goto OUT_OF_LOOP;
      }
    }
    cnt++;
  OUT_OF_LOOP:
    continue;
  } while (next_permutation(all(s)));
  cout << cnt << el;
  return 0;
}
