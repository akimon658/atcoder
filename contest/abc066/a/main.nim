import sequtils
import strutils

let abc = stdin.readLine.split.map(parseInt)
var min = abc[0] + abc[1]

if abc[0] + abc[2] < min:
  min = abc[0] + abc[2]

if abc[1] + abc[2] < min:
  min = abc[1] + abc[2]

echo min
