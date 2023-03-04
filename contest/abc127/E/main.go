package main

import (
	"bufio"
	"os"
	"strconv"
)

const MOD = 1000000007

func solve(N int, M int, K int) {

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
	var M int
	scanner.Scan()
	M, _ = strconv.Atoi(scanner.Text())
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	solve(N, M, K)
}
