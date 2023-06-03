package main

import (
	"bufio"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, M int, s []int, t []int, L []int, R []int) {

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
	s := make([]int, M)
	t := make([]int, M)
	for i := 0; i < M; i++ {
		scanner.Scan()
		s[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		t[i], _ = strconv.Atoi(scanner.Text())
	}
	L := make([]int, N)
	R := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		L[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		R[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, M, s, t, L, R)
}
