#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

const string el = "\n";

#define all(x) (x).begin(), (x).end()
#define rep(i, min, sup) for (int i = (int)min; i < (int)sup; i++)

int main() {
  int n;
  cin >> n;
  bool sweet = false;
  rep(i, 0, n) {
    string s;
    cin >> s;
    if (i < n - 1 && sweet && s == "sweet") {
      cout << "No" << el;
      return 0;
    }
    if (s == "sweet") {
      sweet = true;
    } else {
      sweet = false;
    }
  }
  cout << "Yes" << el;
  return 0;
}
