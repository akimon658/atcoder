package main

import (
	"bufio"
	"fmt"
	"os"
)

const YES = "Yes"
const NO = "No"

func solve(w string) {
	times := make([]int, 26)
	for _, v := range w {
		times[v-97]++
	}
	for _, v := range times {
		if v%2 == 1 {
			fmt.Println(NO)
			return
		}
	}
	fmt.Println(YES)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var w string
	scanner.Scan()
	w = scanner.Text()
	solve(w)
}
