package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, A []int, B []string, C []int, D []string) {

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
	A := make([]int, M)
	B := make([]string, M)
	C := make([]int, M)
	D := make([]string, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		B[i] = scanner.Text()
		scanner.Scan()
		C[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		D[i] = scanner.Text()
	}
	solve(N, M, A, B, C, D)
}
