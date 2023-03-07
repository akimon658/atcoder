package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(H int, W int, A [][]int) {
	var b strings.Builder
	for j := 0; j < W; j++ {
		b.WriteString(strconv.Itoa(A[0][j]))
		for i := 1; i < H; i++ {
			b.WriteString(" ")
			b.WriteString(strconv.Itoa(A[i][j]))
		}
		b.WriteString("\n")
	}
	fmt.Print(b.String())
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var H int
	scanner.Scan()
	H, _ = strconv.Atoi(scanner.Text())
	var W int
	scanner.Scan()
	W, _ = strconv.Atoi(scanner.Text())
	A := make([][]int, H)
	for i := 0; i < H; i++ {
		A[i] = make([]int, W)
	}
	for i := 0; i < H; i++ {
		for j := 0; j < W; j++ {
			scanner.Scan()
			A[i][j], _ = strconv.Atoi(scanner.Text())
		}
	}
	solve(H, W, A)
}
