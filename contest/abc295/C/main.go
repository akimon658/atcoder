package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, A []int) {
	var (
		have [1_000_000_000]bool
		sum  int
	)
	for i := 0; i < N; i++ {
		if have[A[i]-1] {
			sum++
			have[A[i]-1] = false
		} else {
			have[A[i]-1] = true
		}
	}
	fmt.Println(sum)
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
	A := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, A)
}
