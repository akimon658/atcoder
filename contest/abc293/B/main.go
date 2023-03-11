package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(N int, A []int) {
	called := make([]bool, N)
	for i := 0; i < N; i++ {
		if !called[i] {
			called[A[i]-1] = true
		}
	}
	var (
		builder strings.Builder
		k       int
	)
	for i := 0; i < N; i++ {
		if !called[i] {
			builder.WriteString(fmt.Sprintf("%d ", i+1))
			k++
		}
	}
	fmt.Printf("%d\n%s\n", k, strings.TrimSuffix(builder.String(), " "))
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
