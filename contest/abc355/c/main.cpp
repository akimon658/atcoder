#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

int64_t solve(int64_t N, int T, const std::vector<int64_t> &A) {
  vector<int> row(N, 0), col(N, 0);
  int diagL = 0, diagR = 0;
  for (int i = 0; i < T; i++) {
    int r = (A[i] - 1) / N;
    int c = (A[i] - 1) % N;
    row[r]++;
    if (row[r] == N) {
      return i + 1;
    }
    col[c]++;
    if (col[c] == N) {
      return i + 1;
    }
    if (r == c) {
      diagL++;
      if (diagL == N) {
        return i + 1;
      }
    }
    if (r + c == N - 1) {
      diagR++;
      if (diagR == N) {
        return i + 1;
      }
    }
  }
  return -1;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int64_t N;
  int T;
  std::cin >> N >> T;
  std::vector<int64_t> A(T);
  REP(i, T) { std::cin >> A[i]; }
  auto ans = solve(N, T, A);
  std::cout << ans << '\n';
  return 0;
}
