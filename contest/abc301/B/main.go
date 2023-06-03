package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
	"strings"
)

func solve(N int, A []int) {
	a2 := make([]int, 0, N)
	for i := 0; i+1 < N; i++ {
		a2 = append(a2, A[i])
		if math.Abs(float64(A[i]-A[i+1])) != 1 {
			if A[i] < A[i+1] {
				for j := A[i] + 1; j < A[i+1]; j++ {
					a2 = append(a2, j)
				}
			} else {
				for j := A[i] - 1; j > A[i+1]; j-- {
					a2 = append(a2, j)
				}
			}
		}
	}
	a2 = append(a2, A[N-1])
	fmt.Println(strings.TrimSuffix(strings.TrimPrefix(fmt.Sprintf("%d", a2), "["), "]"))
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
	solve(N, A)
}
