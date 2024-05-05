import sequtils
import strutils

let n = stdin.readLine.parseInt
var sum: int
var diff = newSeq[int](n)

for i in 0 ..< n:
  let ab = stdin.readLine.split.map(parseInt)
  sum += ab[0]
  diff[i] = ab[1] - ab[0]

echo sum + diff[diff.maxIndex]
