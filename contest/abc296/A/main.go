package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, S string) {
	first := string(S[0])
	result := YES
	for i := 0; i < N; i += 2 {
		if string(S[i]) != first {
			result = NO
			break
		}
		if i+1 < N && string(S[i+1]) == first {
			result = NO
			break
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
	var N int
	scanner.Scan()
	N, _ = strconv.Atoi(scanner.Text())
	var S string
	scanner.Scan()
	S = scanner.Text()
	solve(N, S)
}
