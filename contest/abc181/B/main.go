package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, A []int, B []int) {
	var sum int
	for i := 0; i < N; i++ {
		a := A[i]
		b := B[i]
		sum += (a + b) * (b - a + 1) / 2
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
	B := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		B[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, A, B)
}
