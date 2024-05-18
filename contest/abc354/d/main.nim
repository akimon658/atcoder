import atcoder/header

let a = nextInt()
let b = nextInt()
let c = nextInt()
let d = nextInt()
var rowSDoubled = (c - a) div 4 * 2
let rLeft = a mod 4
if rLeft == 3 or rLeft == 2 or rLeft == -1 or rLeft == -2:
  rowSDoubled += 1
if rLeft == 1 or rLeft == -3:
  rowSDoubled += 2

let rRight = c mod 4
if rRight == 1 or rRight == -3:
  rowSDoubled += 2
if rRight == 2 or rRight == 3 or rRight == -2 or rRight == -1:
  rowSDoubled += 3

echo rowSDoubled * (d - b)
