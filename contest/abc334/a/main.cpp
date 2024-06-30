#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, min, sup) for (int i = min; i < sup; i++)

int main() {
  int b, g;
  cin >> b >> g;
  string present = "Bat";
  if (b < g) {
    present = "Glove";
  }
  cout << present << "\n";
  return 0;
}
