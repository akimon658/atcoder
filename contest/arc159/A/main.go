package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(N int, K int, a [][]int, Q int, s []int, t []int) {
	var b strings.Builder
	for i := 0; i < Q; i++ {
		s2 := s[i] % N
		if s2 == 0 {
			s2 = N
		}
		t2 := t[i] % N
		if t2 == 0 {
			t2 = N
		}
		cost := make([]int, N)
		queue := make([]int, 0, N)
		currentIndex := s2 - 1
		result := -1
		for {
			currentCost := cost[currentIndex]
			for j := 0; j < N; j++ {
				if a[currentIndex][j] == 1 && cost[j] == 0 {
					queue = append(queue, j)
					cost[j] = currentCost + 1
				}
			}
			if currentIndex+1 == t2 && cost[currentIndex] != 0 {
				result = cost[currentIndex]
				break
			}
			if len(queue) == 0 {
				break
			}
			currentIndex = queue[0]
			queue = queue[1:]
		}
		b.WriteString(strconv.Itoa(result))
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
	var K int
	scanner.Scan()
	K, _ = strconv.Atoi(scanner.Text())
	a := make([][]int, N)
	for i := 0; i < N; i++ {
		a[i] = make([]int, N)
	}
	for i := 0; i < N; i++ {
		for j := 0; j < N; j++ {
			scanner.Scan()
			a[i][j], _ = strconv.Atoi(scanner.Text())
		}
	}
	var Q int
	scanner.Scan()
	Q, _ = strconv.Atoi(scanner.Text())
	s := make([]int, Q)
	t := make([]int, Q)
	for i := 0; i < Q; i++ {
		scanner.Scan()
		s[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		t[i], _ = strconv.Atoi(scanner.Text())
	}
	solve(N, K, a, Q, s, t)
}
