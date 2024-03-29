package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, M int, L []int, R []int) {
	max := R[0]
	min := L[0]
	for i := 1; i < M; i++ {
		if R[i] < max {
			max = R[i]
		}
		if L[i] > min {
			min = L[i]
		}
	}
	result := max - min + 1
	if result < 0 {
		result = 0
	}
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
	var M int
	scanner.Scan()
	M, _ = strconv.Atoi(scanner.Text())
	L := make([]int, M)
	R := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		L[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		R[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, L, R)
}
