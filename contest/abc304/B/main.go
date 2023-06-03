package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func solve(N int) {
	s := strconv.Itoa(N)
	if len(s) < 3 {
		fmt.Println(N)
		os.Exit(0)
	}
	pre, _ := strconv.Atoi(string(s[:3]))
	fmt.Println(pre * int(math.Pow(10, float64(len(s)-3))))
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
