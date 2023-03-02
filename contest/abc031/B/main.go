package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(L int, H int, N int, A []int) {
	for i := 0; i < N; i++ {
		a := A[i]
		var result int
		switch {
		case a < L:
			result = L - a
		case a > H:
			result = -1
		}
		fmt.Println(result)
	}
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var L int
	scanner.Scan()
	L, _ = strconv.Atoi(scanner.Text())
	var H int
	scanner.Scan()
	H, _ = strconv.Atoi(scanner.Text())
	var N int
	scanner.Scan()
	N, _ = strconv.Atoi(scanner.Text())
	A := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(L, H, N, A)
}
