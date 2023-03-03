package main

import (
	"bufio"
	"fmt"
	"math/big"
	"os"
	"strconv"
)

func solve(N int, K int, a []int) {
	var sum big.Int
	n := N / 2
	for i := 0; i < n; i++ {
		var localSum big.Int
		localSum.Add(big.NewInt(int64(a[i])), big.NewInt(int64(a[N-i-1])))
		localSum.Mul(&localSum, big.NewInt(int64(min(i+1, K))))
		sum.Add(&sum, &localSum)
	}
	if N%2 == 1 {
		var localSum big.Int
		localSum.Mul(big.NewInt(int64(a[n])), big.NewInt(int64(min(n+1, K))))
		sum.Add(&sum, &localSum)
	}
	fmt.Println(sum.String())
}

func min(n, m int) int {
	if n < m {
		return n
	}
	return m
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
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	a := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, K, a)
}
