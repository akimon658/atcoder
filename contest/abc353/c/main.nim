import algorithm
import math
import sequtils

import atcoder/header

let n = nextInt()
var a = newSeqWith(n, nextInt()).sorted
const c = 100_000_000
var cnt: int
var r = n

for i in 0 ..< n:
  r = max(r, i + 1)

  while i < r - 1 and a[i] + a[r - 1] >= c:
    r -= 1

  cnt += n - r

echo a.sum * (n - 1) - cnt * c
