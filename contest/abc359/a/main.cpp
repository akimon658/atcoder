#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "Takahashi") {
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}
