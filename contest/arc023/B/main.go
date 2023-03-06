package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(R int, C int, D int, A [][]int) {
	d := D + 1
	var max int
	for i := 0; i < min(R, d); i++ {
		aR := A[i]
		for j := (i + D%2) % 2; j < min(C, d-i); j += 2 {
			a := aR[j]
			if a > max {
				max = a
			}
		}
	}
	fmt.Println(max)
}

func min(x, y int) int {
	if x < y {
		return x
	}
	return y
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var R int
	scanner.Scan()
	R, _ = strconv.Atoi(scanner.Text())
	var C int
	scanner.Scan()
	C, _ = strconv.Atoi(scanner.Text())
	var D int
	scanner.Scan()
	D, _ = strconv.Atoi(scanner.Text())
	A := make([][]int, R)
	for i := 0; i < R; i++ {
		A[i] = make([]int, C)
	}
	for i := 0; i < R; i++ {
		for j := 0; j < C; j++ {
			scanner.Scan()
			A[i][j], _ = strconv.Atoi(scanner.Text())
		}
	}
	solve(R, C, D, A)
}
