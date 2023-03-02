package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(A int, D int) {
	if A <= D {
		A++
	} else {
		D++
	}
	fmt.Println(A * D)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var A int
	scanner.Scan()
	A, _ = strconv.Atoi(scanner.Text())
	var D int
	scanner.Scan()
	D, _ = strconv.Atoi(scanner.Text())
	solve(A, D)
}
