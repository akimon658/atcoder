#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    string sStr;
    cin >> sStr;
    for (int j = 0; j < m; j++) {
      if (sStr[j] == 'o') {
        s[i] += 1 << j;
      }
    }
  }
  int complete = (1 << m) - 1;
  int result = n;
  for (int i = 0; i < (1 << n); i++) {
    int bit = 0;
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        bit = bit | s[j];
        cnt++;
      }
    }
    if (bit == complete) {
      result = min(result, cnt);
    }
  }
  cout << result << "\n";
  return 0;
}
