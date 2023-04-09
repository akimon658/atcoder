package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, l []int, r []int) {

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
	l := make([]int, N)
	r := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		l[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		r[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, l, r)
}
