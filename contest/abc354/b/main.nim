import algorithm

import atcoder/header

let n = nextInt()
var s = newSeq[string](n)
var t: int

for i in 0 ..< n:
  s[i] = nextString()
  t += nextInt()

s.sort()

echo s[t mod n]
