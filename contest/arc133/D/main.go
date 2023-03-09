package main

import (
	"bufio"
	"os"
	"strconv"
)

const MOD = 998244353

func solve(L int, R int, V int) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var L int
	scanner.Scan()
	L, _ = strconv.Atoi(scanner.Text())
	var R int
	scanner.Scan()
	R, _ = strconv.Atoi(scanner.Text())
	var V int
	scanner.Scan()
	V, _ = strconv.Atoi(scanner.Text())
	solve(L, R, V)
}
