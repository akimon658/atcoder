package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, U []int, V []int, W []int, Q int, A []int, S []int, T []int) {

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
	U := make([]int, M)
	V := make([]int, M)
	W := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		U[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		V[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		W[i], _ = strconv.Atoi(scanner.Text())
	}
	var Q int
	scanner.Scan()
	Q, _ = strconv.Atoi(scanner.Text())
	A := make([]int, Q)
	S := make([]int, Q)
	T := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		S[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		T[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, U, V, W, Q, A, S, T)
}
