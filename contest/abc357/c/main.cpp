#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<string>> carpet(int level) {
  if (level == 0) {
    return {{"#"}};
  }
  auto part = carpet(level - 1);
  static vector<vector<string>> whole(part.size() * 3);
  static vector<string> white(part.size(), ".");
  for (int i = 0; i < part.size(); i++) {
    for (int j = 0; j < 3; j++) {
      whole[i].insert(whole[i].end(), part[i].begin(), part[i].end());
      if (j != 1) {
        whole[i + part.size()].insert(whole[i + part.size()].end(),
                                      part[i].begin(), part[i].end());
      } else {
        whole[i + part.size()].insert(whole[i + part.size()].end(),
                                      white.begin(), white.end());
      }
      whole[i + 2 * part.size()].insert(whole[i + 2 * part.size()].end(),
                                        part[i].begin(), part[i].end());
    }
  }
  return whole;
}

int main() {
  int n;
  cin >> n;
  auto ans = carpet(n);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; ans[i].size(); j++) {
      cout << ans[i][j];
    }
    cout << "\n";
  }
  return 0;
}
