package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, S int, X string) {

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
	var S int
	scanner.Scan()
	S, _ = strconv.Atoi(scanner.Text())
	var X string
	scanner.Scan()
	X = scanner.Text()
	solve(N, S, X)
}
