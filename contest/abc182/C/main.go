package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(N string) {
	k := len(N)
	n := make([]int, k)
	for i, v := range N {
		n[i], _ = strconv.Atoi(string(v))
	}
	result := -1
l:
	for i := 0; i < k; i++ {
		var sum int
		for j := range n {
			sum += n[j]
		}
		remainder := sum % 3
		if remainder == 0 {
			result = i
			break
		}
		for j := range n {
			if n[j]%3 == remainder {
				n[j] = n[len(n)-1]
				n = n[:len(n)-1]
				continue l
			}
		}
		for j := range n {
			if n[j]%3 != 0 {
				n[j] = n[len(n)-1]
				n = n[:len(n)-1]
				break
			}
		}
	}
	fmt.Println(result)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var N string
	scanner.Scan()
	N = scanner.Text()
	solve(N)
}
