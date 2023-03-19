package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(D int) {
	s := "Christmas" + strings.Repeat(" Eve", 25-D)
	fmt.Println(s)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var D int
	scanner.Scan()
	D, _ = strconv.Atoi(scanner.Text())
	solve(D)
}
