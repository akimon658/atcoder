package main

import (
	"bufio"
	"os"
	"strconv"
)

const MOD = 1000000007

func solve(N int, H []int) {

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
	H := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		H[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, H)
}
