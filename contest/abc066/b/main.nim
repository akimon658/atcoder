import strutils

var s = stdin.readLine

proc isEvenStr(s: string): bool =
  for i in 0 .. s.len div 2 - 1:
    if s[i] != s[s.len div 2 + i]:
      return false
  return true

for i in countup(1, s.len div 2):
  s.delete(s.len-2 .. s.len-1)
  if s.isEvenStr:
    break

echo s.len
