package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, Q int, L []int, R []int, T []int) {
	a := make([]int, N)
	for i := 0; i < Q; i++ {
		for j := L[i] - 1; j < R[i]; j++ {
			a[j] = T[i]
		}
	}
	for i := 0; i < N; i++ {
		fmt.Println(a[i])
	}
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
	L := make([]int, Q)
	R := make([]int, Q)
	T := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		L[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		R[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		T[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, Q, L, R, T)
}
