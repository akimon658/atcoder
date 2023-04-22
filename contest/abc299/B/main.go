package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, T int, C []int, R []int) {
	var (
		c1Max       int
		c1MaxPlayer int
		tExists     bool
		tMax        int
		tMaxPlayer  int
	)
	for i := 0; i < N; i++ {
		if C[i] == T {
			tExists = true
			if R[i] > tMax {
				tMax = R[i]
				tMaxPlayer = i + 1
			}
		}
		if C[i] == C[0] && R[i] > c1Max {
			c1Max = R[i]
			c1MaxPlayer = i + 1
		}
	}
	result := c1MaxPlayer
	if tExists {
		result = tMaxPlayer
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
	var T int
	scanner.Scan()
	T, _ = strconv.Atoi(scanner.Text())
	C := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		C[i], _ = strconv.Atoi(scanner.Text())
	}
	R := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		R[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, T, C, R)
}
