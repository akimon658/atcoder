package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, K int, a []int, b []int, p []int, h []int) {

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
	var M int
	scanner.Scan()
	M, _ = strconv.Atoi(scanner.Text())
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	a := make([]int, M)
	b := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		b[i], _ = strconv.Atoi(scanner.Text())
	}
	p := make([]int, K)
	h := make([]int, K)
	for i := 0; i < K; i++ {
		scanner.Scan()
		p[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		h[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, K, a, b, p, h)
}
