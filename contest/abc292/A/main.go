package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func solve(S string) {
	fmt.Println(strings.ToUpper(S))
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
