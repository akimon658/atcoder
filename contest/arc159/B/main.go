package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(A int, B int) {
	var result int
	for A >= 1 && B >= 1 {
		g := gcd(A, B)
		A -= g
		B -= g
		result++
	}
	fmt.Println(result)
}

func gcd(a, b int) int {
	if a%b == 0 {
		return b
	}
	return gcd(b, a%b)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var A int
	scanner.Scan()
	A, _ = strconv.Atoi(scanner.Text())
	var B int
	scanner.Scan()
	B, _ = strconv.Atoi(scanner.Text())
	solve(A, B)
}
