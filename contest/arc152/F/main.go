package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, a []int, b []int) {

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
	a := make([]int, N-1)
	b := make([]int, N-1)
	for i := 0; i < N-1; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		b[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, a, b)
}
