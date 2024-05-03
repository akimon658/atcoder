import sequtils
import strutils

let abc: seq[int] = map(stdin.readLine.split, parseInt)

const d: int = 1_000_000_007

echo abc[0] * abc[1] mod d * abc[2] mod d
