#include <atcoder/all>
#include <bits/stdc++.h>
using namespace atcoder;
using namespace std;
typedef long long ll;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int s(int n) {
  int result = n / 100;
  n %= 100;
  result += n / 10;
  n %= 10;
  result += n;
  return result;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << max(s(a), s(b)) << endl;
  return 0;
}
