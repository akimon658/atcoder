#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t n, int m, int64_t k, const std::vector<int> &c,
              const std::vector<std::vector<int>> &a,
              const std::vector<char> &r) {
  // TODO: edit here
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> c;
  vector<vector<int>> a;
  vector<char> r;
  auto ans = solve(n, m, k, c, a, r);
  std::cout << ans << '\n';
  return 0;
}
