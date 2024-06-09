#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string toTernaryStr(int x, int digits) {
  string result = "";
  for (int i = digits; i >= 0; i--) {
    int N = pow(3, i);
    result += to_string(x / N);
    x %= N;
  }
  return result;
}

int main() {
  int n;
  cin >> n;
  int row = pow(3, n);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < row; j++) {
      string iStr = toTernaryStr(i, n - 1);
      string jStr = toTernaryStr(j, n - 1);
      string cell = "#";
      for (int k = 0; k < n; k++) {
        if (iStr[k] == '1' && jStr[k] == '1') {
          cell = ".";
          break;
        }
      }
      cout << cell;
    }
    cout << "\n";
  }
  return 0;
}
