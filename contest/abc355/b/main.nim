import algorithm
import sequtils
import atcoder/header

let n = nextInt()
let m = nextInt()
var a = newSeqWith(n, nextInt())
var b = newSeqWith(m, nextInt())
a.sort()
b.sort()
var result = "No"
var aIndex, bIndex: int
var cIsA = false

for i in 0 ..< n+m:
  if bIndex == m:
    if cIsA:
      result = "Yes"
    break

  if aIndex == n:
    break

  if a[aIndex] > b[bIndex]:
    bIndex += 1
    cIsA = false
  else:
    if cIsA:
      result = "Yes"
      break
    aIndex += 1
    cIsA = true

echo result
