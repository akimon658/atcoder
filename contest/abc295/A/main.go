package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, W []string) {
	result := NO
	for i := 0; i < N; i++ {
		w := W[i]
		if w == "and" || w == "not" || w == "that" || w == "the" || w == "you" {
			result = YES
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
	W := make([]string, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		W[i] = scanner.Text()
	}
	solve(N, W)
}
