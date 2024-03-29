package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(A int, B int, C int) {
	cheap := A
	if A > B {
		cheap = B
	}
	fmt.Println(C / cheap)
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
	var C int
	scanner.Scan()
	C, _ = strconv.Atoi(scanner.Text())
	solve(A, B, C)
}
