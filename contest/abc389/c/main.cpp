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

template <class... T> void input(T &...a) { (cin >> ... >> a); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int q;
  input(q);
  vector<pair<ll, ll>> queue;
  ll top_pos = 0;
  int top_idx = 0;
  rep(i, 0, q) {
    int type;
    input(type);
    switch (type) {
    case 1: {
      ll l;
      input(l);
      ll pos = 0;
      if ((int)queue.size() > top_idx) {
        pos = queue[queue.size() - 1].first + queue[queue.size() - 1].second;
      }
      queue.push_back({pos, l});
      break;
    }
    case 2: {
      top_pos += queue[top_idx].second;
      top_idx++;
      break;
    }
    default: {
      int k;
      input(k);
      cout << queue[top_idx + k - 1].first - top_pos << el;
    }
    }
  }
}
