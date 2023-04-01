package main

import (
	"bufio"
	"fmt"
	"os"
)

func solve(S []string) {
	for i := 0; i < 8; i++ {
		for j := range S[i] {
			if string(S[i][j]) == "*" {
				fmt.Printf("%s%d\n", string("a"[0]+byte(j)), 8-i)
			}
		}
	}
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	S := make([]string, 8)
	for i := 0; i < 8; i++ {
		scanner.Scan()
		S[i] = scanner.Text()
	}
	solve(S)
}
