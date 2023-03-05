package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(n int, s int) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var n int
	scanner.Scan()
	n, _ = strconv.Atoi(scanner.Text())
	var s int
	scanner.Scan()
	s, _ = strconv.Atoi(scanner.Text())
	solve(n, s)
}
