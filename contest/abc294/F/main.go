package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, K int, A []int, B []int, C []int, D []int) {

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
	A := make([]int, N)
	B := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		B[i], _ = strconv.Atoi(scanner.Text())
	}
	C := make([]int, M)
	D := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		C[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		D[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, K, A, B, C, D)
}
