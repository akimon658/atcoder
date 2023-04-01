package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, X int, A []int) {
	sort.Ints(A)
	result := NO
l:
	for i := 0; i < N; i++ {
		target := A[i] - X
		max := N - 1
		min := 0
		if target > A[i] {
			min = i
		} else {
			max = i
		}
		for min <= max {
			j := (min + max) / 2
			switch {
			case A[j] == target:
				result = YES
				break l
			case A[j] > target:
				max = j - 1
			default:
				min = j + 1
			}
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
	var X int
	scanner.Scan()
	X, _ = strconv.Atoi(scanner.Text())
	A := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		A[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, X, A)
}
