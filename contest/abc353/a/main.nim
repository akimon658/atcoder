import atcoder/header

let n = nextInt()
var h = newSeq[int](n)

for i in 0 ..< n:
  h[i] = nextInt()

var ans = -1

for i in 1 ..< n:
  if h[i] > h[0]:
    ans = i + 1
    break

echo ans
