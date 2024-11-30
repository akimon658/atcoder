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
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<pair<int, int>> b(m);
  rep(i, 0, n) { cin >> a[i]; }
  rep(i, 0, m) {
    int tmp;
    cin >> tmp;
    b[i] = {tmp, i};
  }
  sort(all(b), greater());
  vector<int> eater(m);
  int a_idx = 0;
  rep(i, 0, m) {
    if (a_idx == n) {
      eater[b[i].second] = -1;
      continue;
    }
    while (b[i].first < a[a_idx]) {
      a_idx++;
      if (a_idx == n) {
        break;
      }
    }
    int e = a_idx + 1;
    if (a_idx == n) {
      e = -1;
    }
    eater[b[i].second] = e;
  }
  rep(i, 0, m) { cout << eater[i] << el; }
}
