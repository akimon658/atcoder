package main

import (
	"bufio"
	"os"
	"sort"
	"strconv"
)

func solve(N int, A int, x []int) {
	sorted := sort.IntSlice(x)
	nums := make([]int, sorted[sorted.Len()-1])
	for i := 0; i < N; i++ {
		nums[sorted[i]-1]++
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
	var A int
	scanner.Scan()
	A, _ = strconv.Atoi(scanner.Text())
	x := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		x[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, A, x)
}
