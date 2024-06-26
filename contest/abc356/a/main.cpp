#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

std::vector<int> solve(int64_t N, int64_t L, int64_t R) {
  vector<int> ans;
  for (int i = 1; i < L; i++) {
    ans.push_back(i);
  }
  for (int i = R; i >= L; i--) {
    ans.push_back(i);
  }
  for (int i = R + 1; i <= N; i++) {
    ans.push_back(i);
  }
  return ans;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int64_t N, L, R;
  std::cin >> N >> L >> R;
  auto ans = solve(N, L, R);
  REP(i, (int)ans.size()) { std::cout << ans[i] << ' '; }
  std::cout << '\n';
  return 0;
}
