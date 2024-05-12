import algorithm
import sequtils
import strutils

import atcoder/header

let n = nextInt()
let s = nextString()
let w = newSeqWith(n, nextInt())
var persons = newSeq[(int, int)](n)

for i in 0 ..< n:
  persons[i] = (w[i], parseInt($s[i]))

proc cmpByWeight(x, y: (int, int)): int =
  cmp(x[0], y[0])

persons.sort(cmpByWeight)

let numAdults = s.count("1")
var cntChildren: int
var ans = numAdults

for i in 0 ..< n:
  if persons[i][1] == 0:
    cntChildren += 1

  if i == n-1 or persons[i][0] != persons[i+1][0]:
    let correct = 2 * cntChildren + numAdults - i - 1
    ans = max(ans, correct)

echo ans
