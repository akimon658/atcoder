package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(A int, B int) {
	fmt.Println(2*A + 100 - B)
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
