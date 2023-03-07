package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, H []int, U []int, V []int) {

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
	H := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		H[i], _ = strconv.Atoi(scanner.Text())
	}
	U := make([]int, M)
	V := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		U[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		V[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, H, U, V)
}
