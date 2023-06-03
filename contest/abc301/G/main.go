package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, X []int, Y []int, Z []int) {

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
	X := make([]int, N)
	Y := make([]int, N)
	Z := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		X[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		Y[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		Z[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, X, Y, Z)
}
