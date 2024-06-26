#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;

struct cElem {
  int64_t val;
  bool fromA;
  bool operator<(const cElem &rhs) const { return val < rhs.val; }
};

const std::string YES = "Yes";
const std::string NO = "No";
bool solve(int N, int M, std::vector<int64_t> &A, std::vector<int64_t> &B) {
  vector<cElem> c;
  for (int i = 0; i < N; i++) {
    c.push_back({A[i], true});
  }
  for (int i = 0; i < M; i++) {
    c.push_back({B[i], false});
  }
  sort(ALL(c));
  for (int i = 0; i < N + M - 1; i++) {
    if (c[i].fromA && c[i + 1].fromA) {
      return true;
    }
  }
  return false;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int N, M;
  std::cin >> N;
  std::vector<int64_t> A(N);
  std::cin >> M;
  std::vector<int64_t> B(M);
  REP(i, N) { std::cin >> A[i]; }
  REP(i, M) { std::cin >> B[i]; }
  auto ans = solve(N, M, A, B);
  std::cout << (ans ? YES : NO) << '\n';
  return 0;
}
