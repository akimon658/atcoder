#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++ (i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++ (i))
#define REP_R(i, n) for (int i = (int)(n) - 1; (i) >= 0; -- (i))
#define REP3R(i, m, n) for (int i = (int)(n) - 1; (i) >= (int)(m); -- (i))
#define ALL(x) ::std::begin(x), ::std::end(x)
using namespace std;


std::pair<int64_t, int64_t> solve(auto H, auto W, const std::vector<std::vector<auto> > &S) {
    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto H, W;
    std::cin >> H >> W;
    std::vector<std::vector<auto> > S(H + W + 4, std::vector<auto>((H + W + 4)));
    REP (j, H + 4) {
        REP (i, W) {
            std::cin >> S[i + j][i + j];
        }
    }
    auto [a, b] = solve(H, W, S);
    std::cout << a << ' ' << b << '\n';
    return 0;
}
