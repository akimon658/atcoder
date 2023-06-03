package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
	"strings"
)

const YES = "Yes"
const NO = "No"

func solve(N int, D int, X []int, Y []int) {
	queue := []int{0}
	infected := make([]bool, N)
	infected[0] = true
	toCheck := make([]int, N-1)
	for i := range toCheck {
		toCheck[i] = i + 1
	}
	for {
		for i := 0; ; {
			if i >= len(toCheck) {
				break
			}
			dist2 := math.Pow(float64(X[queue[0]]-X[toCheck[i]]), 2) + math.Pow(float64(Y[queue[0]]-Y[toCheck[i]]), 2)
			if dist2 <= math.Pow(float64(D), 2) {
				infected[toCheck[i]] = true
				queue = append(queue, toCheck[i])
				toCheck[i] = toCheck[len(toCheck)-1]
				toCheck = toCheck[:len(toCheck)-1]
			} else {
				i++
			}
		}
		if len(queue) == 1 {
			break
		}
		queue[0] = queue[len(queue)-1]
		queue = queue[:len(queue)-1]
	}
	var b strings.Builder
	for i := range infected {
		if infected[i] {
			b.WriteString(YES)
		} else {
			b.WriteString(NO)
		}
		b.WriteString("\n")
	}
	fmt.Print(b.String())
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
	var D int
	scanner.Scan()
	D, _ = strconv.Atoi(scanner.Text())
	X := make([]int, N)
	Y := make([]int, N)
	for i := 0; i < N; i++ {
		scanner.Scan()
		X[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		Y[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, D, X, Y)
}
