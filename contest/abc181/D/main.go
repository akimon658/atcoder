package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

const YES = "Yes"
const NO = "No"

func solve(S string) {
	count := make([]int, 9)
	for _, v := range S {
		n, _ := strconv.Atoi(string(v))
		count[n-1]++
	}
	length := len(S)
	for n := 8; n < 1000; n += 8 {
		s := strconv.Itoa(n)
		if strings.Contains(s, "0") || (n < 100 && length >= 3) || (n < 10 && length >= 2) {
			continue
		}
		require := make([]int, 9)
		for _, v := range s {
			m, _ := strconv.Atoi(string(v))
			require[m-1]++
		}
		for i := 0; i < 9; i++ {
			if count[i] < require[i] {
				break
			}
			if i == 8 {
				fmt.Println(YES)
				os.Exit(0)
			}
		}
	}
	fmt.Println(NO)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	solve(scanner.Text())
}
