package main

import (
	"bufio"
	"fmt"
	"os"
)

func solve(S string) {
	var result string
	for i := 0; i < len(S); i += 2 {
		s1 := string(S[i])
		s2 := string(S[i+1])
		result += s2 + s1
	}
	fmt.Println(result)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var S string
	scanner.Scan()
	S = scanner.Text()
	solve(S)
}
