import unicode

import atcoder/header

let n = nextInt()
let x = nextInt()

var y = x div n
if x mod n != 0:
  y += 1

echo toUTF8(Rune(int("A".runeAt(0)) + y - 1))
