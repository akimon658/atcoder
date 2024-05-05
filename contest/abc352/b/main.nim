import strformat
import strutils

let s = stdin.readLine
let t = stdin.readLine
var sIndex: int
let sLen = s.len
var sSub = s[0]

for i in 0..<t.len:
  if t[i] == sSub:
    stdout.write(fmt"{i+1} ")
    sIndex += 1
    if sIndex < sLen:
      sSub = s[sIndex]
    else:
      break
