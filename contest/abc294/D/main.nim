import sequtils
import strutils

let nq: seq[int] = stdin.readLine.split.map(parseInt)
var came = newSeqOfCap[int](nq[0])
var ans = 1

for i in 0 .. nq[1]-1:
  let event: seq[int] = stdin.readLine.split.map(parseInt)
  case event[0]
  of 1:
    continue
  of 2:
    came.add(event[1])
  else:
    while true:
      if not came.contains(ans):
        echo ans
        break

      ans += 1
