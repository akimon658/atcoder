import algorithm

import atcoder/extra/structure/set_map
import atcoder/header

let n, k = nextInt()
var p = newSeq[(int, int)](n)

for i in 0 ..< n:
  p[i] = (nextInt(), i)

p = p.sortedByIt(it[0])

var q = initSortedSet[int]()

for i in 0 ..< k:
  q.insert(p[i][1])

var minVal = *q.end().pred - *q.begin()

for i in 0 ..< n - k:
  q.erase(p[i][1])
  q.insert(p[i + k][1])
  minVal = min(minVal, *q.end().pred - *q.begin())

echo minVal
