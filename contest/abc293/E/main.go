package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(A int, X int, M int) {

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
	var X int
	scanner.Scan()
	X, _ = strconv.Atoi(scanner.Text())
	var M int
	scanner.Scan()
	M, _ = strconv.Atoi(scanner.Text())
	solve(A, X, M)
}
