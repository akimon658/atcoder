package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func solve(N int, p []int) {
	sort.Ints(p)
	var sum int
	for i := 0; i < N-1; i++ {
		sum += p[i]
	}
	fmt.Println(sum + p[len(p)-1]/2)
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
	p := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		p[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, p)
}
