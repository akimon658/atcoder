package main

import (
	"bufio"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, M int, u []int, v []int, K int, x []int, y []int, Q int, p []int, q []int) {

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
	u := make([]int, M)
	v := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		u[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		v[i], _ = strconv.Atoi(scanner.Text())
	}
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	x := make([]int, K)
	y := make([]int, K)
	for i := 0; i < K; i++ {
		scanner.Scan()
		x[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		y[i], _ = strconv.Atoi(scanner.Text())
	}
	var Q int
	scanner.Scan()
	Q, _ = strconv.Atoi(scanner.Text())
	p := make([]int, Q)
	q := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		p[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		q[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, u, v, K, x, y, Q, p, q)
}
