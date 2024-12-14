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
  vector<int> score(5);
  rep(i, 0, 5) { cin >> score[i]; }
  vector<pair<int, string>> players(31);
  rep(b, 1, 32) {
    int points = 0;
    string name;
    rep(i, 0, 5) {
      if (b & (1 << i)) {
        points += score[i];
        name.push_back((char)((int)'A' + i));
      }
    }
    players[b - 1] = {points, name};
  }
  sort(all(players), [](const pair<int, string> a, const pair<int, string> b) {
    if (a.first == b.first) {
      return a.second < b.second;
    }
    return a.first > b.first;
  });
  rep(i, 0, 31) { cout << players[i].second << el; }
}
