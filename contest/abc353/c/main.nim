import atcoder/header

let n = nextInt()
var a = newSeq[int](n)

for i in 0 ..< n:
  a[i] = nextInt()

const c = 100_000_000

var (l, r) = (0, n - 1)
while l < r:
  let m = (l + r) / 2
  if a[m] >= c / 2:
    r = m
  else:
    l = m + 1
