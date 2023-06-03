package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N int, S string) {
	var (
		a      int
		t      int
		winner string
	)
	for _, v := range S {
		if string(v) == "A" {
			a++
		} else {
			t++
		}
		if a > t {
			winner = "A"
		} else if t > a {
			winner = "T"
		}
	}
	fmt.Println(winner)
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
