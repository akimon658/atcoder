package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, D int, T []int) {
	result := -1
	for i := 1; i < N; i++ {
		if T[i]-T[i-1] <= D {
			result = T[i]
			break
		}
	}
	fmt.Println(result)
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
	var D int
	scanner.Scan()
	D, _ = strconv.Atoi(scanner.Text())
	T := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		T[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, D, T)
}
