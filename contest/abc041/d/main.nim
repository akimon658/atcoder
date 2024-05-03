import sequtils
import strutils

let nm: seq[int] = stdin.readLine.split.map(parseInt)
var x, y: seq[int] = newSeq[int](nm[1])

for i in 0 .. nm[1]-1:
  let xy: seq[int] = stdin.readLine.split.map(parseInt)
  x[i] = xy[0]
  y[i] = xy[1]

proc f(s: seq[int]): int =
  if s.len == 1:
    return 1

  var xs: seq[int] = newSeqOfCap[int](s.len)
  for i in 0 .. s.len-1:
    xs.add(s[i])
    for j in 0 .. x.len-1:
      if x[j] == s[i] and s.contains(y[j]):
        xs.delete(xs.len-1)

  f(xs)

var u: seq[int] = newSeq[int](nm[0])
for i in 1 .. nm[0]:
  u[i-1] = i

echo f(u)
