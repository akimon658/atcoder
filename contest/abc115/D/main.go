package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, X int) {

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
	var X int
	scanner.Scan()
	X, _ = strconv.Atoi(scanner.Text())
	solve(N, X)
}
