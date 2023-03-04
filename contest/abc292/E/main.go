package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, M int, u []int, v []int) {

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
	solve(N, M, u, v)
}
