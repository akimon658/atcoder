package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, K int, X int, Y int) {
	result := X * N
	if N > K {
		result = X*K + Y*(N-K)
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
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	var X int
	scanner.Scan()
	X, _ = strconv.Atoi(scanner.Text())
	var Y int
	scanner.Scan()
	Y, _ = strconv.Atoi(scanner.Text())
	solve(N, K, X, Y)
}
