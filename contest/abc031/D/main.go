package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(K int, N int, v []int, w []string) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	var N int
	scanner.Scan()
	N, _ = strconv.Atoi(scanner.Text())
	v := make([]int, N)
	w := make([]string, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		v[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		w[i] = scanner.Text()
	}
	solve(K, N, v, w)
}
