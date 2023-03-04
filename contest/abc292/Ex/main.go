package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, B int, Q int, a []int, c []int, x []int) {

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
	var B int
	scanner.Scan()
	B, _ = strconv.Atoi(scanner.Text())
	var Q int
	scanner.Scan()
	Q, _ = strconv.Atoi(scanner.Text())
	a := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	c := make([]int, Q)
	x := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		c[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		x[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, B, Q, a, c, x)
}
