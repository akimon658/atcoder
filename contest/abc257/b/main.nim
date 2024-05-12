import sequtils
import strformat

import atcoder/header

let n = nextInt()
let k = nextInt()
let q = nextInt()
var a = newSeqWith(k, nextInt())
let l = newSeqWith(q, nextInt())

for i in 0 ..< q:
  if a[l[i]-1] != n and (l[i] == k or a[l[i]-1] + 1 != a[l[i]]):
    a[l[i]-1] += 1

for i in 0 ..< k:
  stdout.write("{a[i]} ".fmt)
