package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func solve(N int, K int, h []int) {
	sort.Ints(h)
	min := h[K-1] - h[0]
	for i := 1; i < N-K+1; i++ {
		diff := h[i+K-1] - h[i]
		if diff < min {
			min = diff
		}
	}
	fmt.Println(min)
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
	h := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		h[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, K, h)
}
