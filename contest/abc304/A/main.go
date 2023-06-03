package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, S []string, A []int) {
	min := A[0]
	var minI int
	for i := 1; i < N; i++ {
		if A[i] < min {
			min = A[i]
			minI = i
		}
	}
	for i := 0; i < N; i++ {
		i2 := i + minI
		if i2 >= N {
			i2 -= N
		}
		fmt.Println(S[i2])
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
	S := make([]string, N)
	A := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		S[i] = scanner.Text()
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, S, A)
}
