package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(N int, A []int) {
	prev := A[0]
	var (
		builder strings.Builder
		x       int
	)
	for i := 1; i < N; i++ {
		a := A[i]
		if prev > a {
			x = prev
			break
		}
		prev = a
	}
	if notChecked(x) {
		x = A[len(A)-1]
	}
	for _, v := range A {
		if v != x {
			write(&builder, v)
		}
	}
	fmt.Println(strings.TrimSuffix(builder.String(), " "))
}

func notChecked(x int) bool {
	return x == 0
}

func write(b *strings.Builder, n int) {
	b.WriteString(fmt.Sprintf("%d ", n))
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
