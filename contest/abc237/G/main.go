package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, Q int, X int, P []int, C []int, L []int, R []int) {

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
	var Q int
	scanner.Scan()
	Q, _ = strconv.Atoi(scanner.Text())
	var X int
	scanner.Scan()
	X, _ = strconv.Atoi(scanner.Text())
	P := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		P[i], _ = strconv.Atoi(scanner.Text())
	}
	C := make([]int, Q)
	L := make([]int, Q)
	R := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		C[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		L[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		R[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, Q, X, P, C, L, R)
}
