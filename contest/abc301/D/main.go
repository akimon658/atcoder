package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(S string, N int) {

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
	var N int
	scanner.Scan()
	N, _ = strconv.Atoi(scanner.Text())
	solve(S, N)
}
