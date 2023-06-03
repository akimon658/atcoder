package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(W int, H int, N int, p []int, q []int, A int, a []int, B int, b []int) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var W int
	scanner.Scan()
	W, _ = strconv.Atoi(scanner.Text())
	var H int
	scanner.Scan()
	H, _ = strconv.Atoi(scanner.Text())
	var N int
	scanner.Scan()
	N, _ = strconv.Atoi(scanner.Text())
	p := make([]int, N)
	q := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		p[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		q[i], _ = strconv.Atoi(scanner.Text())
	}
	var A int
	scanner.Scan()
	A, _ = strconv.Atoi(scanner.Text())
	a := make([]int, A)
	for i := 0; i < A; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	var B int
	scanner.Scan()
	B, _ = strconv.Atoi(scanner.Text())
	b := make([]int, B)
	for i := 0; i < B; i++ {
		scanner.Scan()
		b[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(W, H, N, p, q, A, a, B, b)
}
