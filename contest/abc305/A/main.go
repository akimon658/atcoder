package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int) {
	if N%5 >= 3 {
		N += 5
	}
	loc := N / 5
	fmt.Println(loc * 5)
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
	solve(N)
}
