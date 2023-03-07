package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

const YES = "Yes"
const NO = "No"

func solve(S string) {
	result := YES
	half := len(S) / 2
	var (
		aPrefix  string
		aSuffix  string
		builder  strings.Builder
		nPrefix  int
		nSuffix  int
		lChecked bool
		rChecked bool
	)
	for i := 0; i < half; i++ {
		aPrev := builder.String()
		builder.WriteString("a")
		aLocal := builder.String()
		bL := strings.HasPrefix(S, aLocal)
		bR := strings.HasSuffix(S, aLocal)
		if !bL && !lChecked {
			aPrefix = aPrev
			nPrefix = i
			lChecked = true
		}
		if !bR && !rChecked {
			aSuffix = aPrev
			nSuffix = i
			rChecked = true
		}
		if !bL && !bR {
			break
		}
	}
	if nPrefix > nSuffix {
		result = NO
	} else if nPrefix != half || nSuffix != half {
		s := strings.TrimPrefix(S, aPrefix)
		s = strings.TrimSuffix(s, aSuffix)
		for i := 0; i < len(s)/2; i++ {
			if string(s[i]) != string(s[len(s)-i-1]) {
				result = NO
				break
			}
		}
	}
	fmt.Println(result)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var S string
	scanner.Scan()
	S = scanner.Text()
	solve(S)
}
