package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func solve(N int) {
	var sum int
	n := N / 2
	if N%2 == 1 {
		n++
	}
	for i := 1; i < n; i++ {
		sum += countDivisor(i) * countDivisor(N-i) * 2
	}
	if N%2 == 0 {
		sum += int(math.Pow(float64(countDivisor(N/2)), 2))
	}
	fmt.Println(sum)
}

func countDivisor(n int) int {
	var sum int
	for i := 1; i < int(math.Pow(float64(n), 0.5)+1); i++ {
		if n%i == 0 {
			if i*i != n {
				sum += 2
			} else {
				sum++
			}
		}
	}
	return sum
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
	solve(N)
}
