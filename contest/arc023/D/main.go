package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(n int, m int, a []int, x []int) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var n int
	scanner.Scan()
	n, _ = strconv.Atoi(scanner.Text())
	var m int
	scanner.Scan()
	m, _ = strconv.Atoi(scanner.Text())
	a := make([]int, n)
	for i := 0; i < n; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	x := make([]int, m)
	for i := 0; i < m; i++ {
		scanner.Scan()
		x[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(n, m, a, x)
}
