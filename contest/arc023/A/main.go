package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(y int, m int, d int) {
	fmt.Println(f(2014, 5, 17) - f(y, m, d))
}

func f(y, m, d int) int {
	if m == 1 || m == 2 {
		y--
		m += 12
	}
	return 365*y + y/4 - y/100 + y/400 + 306*(m+1)/10 + d - 429
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var y int
	scanner.Scan()
	y, _ = strconv.Atoi(scanner.Text())
	var m int
	scanner.Scan()
	m, _ = strconv.Atoi(scanner.Text())
	var d int
	scanner.Scan()
	d, _ = strconv.Atoi(scanner.Text())
	solve(y, m, d)
}
