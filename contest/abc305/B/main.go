package main

import (
	"bufio"
	"fmt"
	"os"
)

func solve(p string, q string) {
	dist := []int{3, 1, 4, 1, 5, 9}
	if p > q {
		p, q = q, p
	}
	char := []string{"A", "B", "C", "D", "E", "F", "G"}
	var d int
l:
	for i := range char {
		if p == char[i] {
			for j := i + 1; j < len(char); j++ {
				d += dist[j-1]
				if char[j] == q {
					break l
				}
			}
		}
	}
	fmt.Println(d)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var p string
	scanner.Scan()
	p = scanner.Text()
	var q string
	scanner.Scan()
	q = scanner.Text()
	solve(p, q)
}
