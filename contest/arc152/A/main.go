package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, L int, a []int) {
	var sum int
	result := YES
	for i := 0; i < N; i++ {
		if sum+2 > L && a[i] == 2 {
			result = NO
			break
		}
		sum += a[i] + 1
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
	var L int
	scanner.Scan()
	L, _ = strconv.Atoi(scanner.Text())
	a := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, L, a)
}
