import algorithm
import strutils

let n: int = stdin.readLine.parseInt
let a_str: seq[string] = stdin.readLine.split
var a: seq[(int, int)] = newSeq[(int, int)](n)

for i in 0..n-1:
  a[i] = (a_str[i].parseInt, i+1)

proc cmpByHeight(x, y: (int, int)): int =
  cmp(x[0], y[0])

a.sort(cmpByHeight, Descending)

for i in 0..n-1:
  echo a[i][1]
