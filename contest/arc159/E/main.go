package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, a []int, b []int, Q int, c []int, d []int) {

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
	a := make([]int, M)
	b := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		b[i], _ = strconv.Atoi(scanner.Text())
	}
	var Q int
	scanner.Scan()
	Q, _ = strconv.Atoi(scanner.Text())
	c := make([]int, Q)
	d := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		c[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		d[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, a, b, Q, c, d)
}
