import sequtils
import strutils

let n = stdin.readLine.parseInt
let a = stdin.readLine.split.map(parseInt)
var b = newSeq[int](n)

for i in countup(0, n div 2 - 1):
  b[i] = a[n - i*2 - 1]
  b[n - i - 1] = a[n - i*2 - 2]

if n mod 2 == 1:
  b[n div 2] = a[0]

stdout.write(b[0].intToStr)
for i in 1 .. n-1:
  stdout.write(" " & b[i].intToStr)

stdout.write("\n")
