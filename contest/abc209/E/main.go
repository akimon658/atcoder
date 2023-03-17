package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int, s []string) {

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
	s := make([]string, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		s[i] = scanner.Text()
	}
	solve(N, s)
}
