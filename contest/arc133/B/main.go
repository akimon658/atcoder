package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, P []int, Q []int) {

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
	P := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		P[i], _ = strconv.Atoi(scanner.Text())
	}
	Q := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		Q[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, P, Q)
}
