#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  ll h, w;
  int n;
  cin >> h >> w >> n;
  vector<ll> a(n), b(n);
  rep(i, 0, n) {
    ll tmp_a, tmp_b;
    cin >> tmp_a >> tmp_b;
    a[i] = tmp_a - 1;
    b[i] = tmp_b - 1;
  }
  vector<ll> rows_has_card = a;
  vector<ll> cols_has_card = b;
  sort(all(rows_has_card));
  sort(all(cols_has_card));
  rows_has_card.erase(unique(all(rows_has_card)), rows_has_card.end());
  cols_has_card.erase(unique(all(cols_has_card)), cols_has_card.end());
  rep(i, 0, n) {
    int row = lower_bound(all(rows_has_card), a[i]) - rows_has_card.begin() + 1;
    int col = lower_bound(all(cols_has_card), b[i]) - cols_has_card.begin() + 1;
    cout << row << " " << col << el;
  }
  return 0;
}
