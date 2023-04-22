package main

import (
	"bufio"
	"os"
	"strconv"
)

const MOD = 998244353

func solve(X int) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var X int
	scanner.Scan()
	X, _ = strconv.Atoi(scanner.Text())
	solve(X)
}
