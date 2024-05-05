import algorithm
import sequtils
import strutils

let nk = stdin.readLine.split.map(parseInt)
let pIn = stdin.readLine.split.map(parseInt)
var p = newSeq[(int, int)](nk[0])

for i in 0 ..< nk[0]:
  p[i] = (pIn[i], i)

proc sortByP(x, y: (int, int)): int =
  cmp(x[0], y[0])

p.sort(sortByP)

var i = newSeq[int](nk[1])
for j in 0 ..< nk[1]:
  i[j] = p[j][1]

var ans = i[i.maxIndex] - i[i.minIndex]
for j in 1 ..< nk[0] - nk[1]:
  i.delete(0)
  i.add(p[j + nk[1] - 1][1])
  ans = min(ans, i[i.maxIndex] - i[i.minIndex])

echo ans
