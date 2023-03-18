package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int, x []int, y []int) {
	for i := 0; i < N; i++ {
		a := [2]int{x[i], y[i]}
		for j := i + 1; j < N; j++ {
			b := [2]int{x[j] - a[0], y[j] - a[1]}
			for k := j + 1; k < N; k++ {
				c := [2]int{x[k] - a[0], y[k] - a[1]}
				if b[0]*c[1] == b[1]*c[0] {
					fmt.Println(YES)
					os.Exit(0)
				}
			}
		}
	}
	fmt.Println(NO)
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
	x := make([]int, N)
	y := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		x[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		y[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, x, y)
}
