#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  int upper = 0, lower = 0;
  for (int i = 0; i < s.length(); i++) {
    if (isupper(s[i])) {
      upper++;
    } else {
      lower++;
    }
  }
  if (upper > lower) {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  } else {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  cout << s << "\n";
  return 0;
}
