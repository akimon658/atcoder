package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func solve(N int, M int) {
	var x int
l:
	switch {
	case M <= N:
		x = M
	case N < 1_000_000 && M > N*N:
		x = -1
	default:
		rootM := math.Sqrt(float64(M))
		for i := 1; i <= int(rootM); i++ {
			if M%i == 0 && M/i <= N {
				x = M
				break l
			}
		}
		for i := 0; i < N; i++ {
			if (i+1)*(N-i) >= M {
				x = (i + 1) * (N - i)
				break
			}
		}
	}
	fmt.Println(x)
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
	solve(N, M)
}
