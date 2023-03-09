package main

import (
	"bufio"
	"os"
	"strconv"
)

const MOD = 3

func solve(H int, W int, K int, A []int, B []int) {

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
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	A := make([]int, H)
	for i := 0; i < H; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
	}
	B := make([]int, W)
	for i := 0; i < W; i++ {
		scanner.Scan()
		B[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(H, W, K, A, B)
}
