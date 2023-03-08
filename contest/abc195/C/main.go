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
	l := len(s)
	maxComma := l / 3
	if l%3 == 0 {
		maxComma--
	}
	if maxComma == 0 {
		fmt.Println(0)
		os.Exit(0)
	}
	var result int
	for i := 1; i < maxComma; i++ {
		result += int(math.Pow10(3*i+3)-math.Pow10(3*i)) * i
	}
	result += (int(float64(N)-math.Pow10(3*maxComma)) + 1) * maxComma
	fmt.Println(result)
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
