package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(N int, S string) {
	var (
		maxX int
		x    int
	)
	for i := 0; i < N; i++ {
		if string(S[i]) == "o" {
			x++
		} else {
			if x > maxX {
				maxX = x
			}
			x = 0
		}
	}
	if x > maxX && strings.HasPrefix(S, "-") {
		maxX = x
	}
	if maxX == 0 {
		maxX = -1
	}
	fmt.Println(maxX)
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
	var S string
	scanner.Scan()
	S = scanner.Text()
	solve(N, S)
}
