package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

const MOD = 1000000007

func solve(N int, C []int) {
	sort.Ints(C)
	result := C[0]
	for i := 1; i < N; i++ {
		result = result * (C[i] - i) % MOD
		if result == 0 {
			break
		}
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
	C := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		C[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, C)
}
