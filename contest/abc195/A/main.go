package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(M int, H int) {
	result := NO
	if H%M == 0 {
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
	var M int
	scanner.Scan()
	M, _ = strconv.Atoi(scanner.Text())
	var H int
	scanner.Scan()
	H, _ = strconv.Atoi(scanner.Text())
	solve(M, H)
}
