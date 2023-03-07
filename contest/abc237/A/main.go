package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func solve(N int) {
	n := int(math.Pow(2, 31))
	result := NO
	if -n <= N && N < n {
		result = YES
	}
	fmt.Println(result)
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
	solve(N)
}
