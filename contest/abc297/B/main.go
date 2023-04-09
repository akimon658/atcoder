package main

import (
	"bufio"
	"fmt"
	"os"
)

const YES = "Yes"
const NO = "No"

func solve(S string) {
	var xB, yB, xR, yR, z int
	for i := range S {
		switch string(S[i]) {
		case "B":
			if xB == 0 {
				xB = i + 1
			} else {
				yB = i + 1
			}
		case "R":
			if xR == 0 {
				xR = i + 1
			} else {
				yR = i + 1
			}
		case "K":
			z = i + 1
		}
	}
	result := NO
	if xB%2 != yB%2 && xR < z && z < yR {
		result = YES
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
