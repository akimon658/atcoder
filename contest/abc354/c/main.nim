import algorithm
import strformat

import atcoder/header

let n = nextInt()
var cards = newSeq[(int, int, int)](n)

for i in 0 ..< n:
  cards[i] = (nextInt(), nextInt(), i + 1)

proc decSortByA(x, y: (int, int, int)): int =
  cmp(y[0], x[0])

cards.sort(decSortByA)

var ok = newSeqOfCap[int](n)
ok.add(cards[0][2])
var cMin = cards[0][1]

for i in 1 ..< n:
  if cMin > cards[i][1]:
    ok.add(cards[i][2])
    cMin = cards[i][1]

echo ok.len
ok.sort()

for i in 0 ..< ok.len:
  stdout.write("{ok[i]} ".fmt)
