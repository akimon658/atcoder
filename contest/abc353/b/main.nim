import atcoder/header

let n = nextInt()
let k = nextInt()
var a = newSeq[int](n)

for i in 0 ..< n:
  a[i] = nextInt()

var ans = 0
var available = k

while true:
  if a.len == 0:
    ans += 1
    break

  if a[0] > available:
    ans += 1
    available = k
  else:
    available -= a[0]
    a.delete(0)

echo ans
