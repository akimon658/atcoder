import sequtils
import strutils

let nxyz = stdin.readLine.split.map(parseInt)

var result = "Yes"

if min(nxyz[1], nxyz[2]) > nxyz[3] or max(nxyz[1], nxyz[2]) < nxyz[3]:
  result = "No"

echo result
