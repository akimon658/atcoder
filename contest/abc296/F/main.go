package main

import (
	"bufio"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, A []int, B []int) {

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
	A := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
	}
	B := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		B[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, A, B)
}
