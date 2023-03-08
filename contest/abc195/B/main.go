package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func solve(A int, B int, W int) {
	unsatisfiable := "UNSATISFIABLE"
	w := W * 1000
	var result string
	if w%B == 0 {
		result = strconv.Itoa(w / B)
	} else {
		if float64(B)-float64(B-w%B)/float64(w/B) < float64(A) {
			fmt.Println(unsatisfiable)
			os.Exit(0)
		}
		result = strconv.Itoa(w/B + 1)
	}
	if w%A == 0 {
		result = fmt.Sprintf("%s %d", result, w/A)
	} else {
		if float64(A)+float64(A-w%A)/float64(w/A) > float64(B) {
			fmt.Println(unsatisfiable)
			os.Exit(0)
		}
		result = fmt.Sprintf("%s %d", result, w/A)
	}
	fmt.Println(result)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var A int
	scanner.Scan()
	A, _ = strconv.Atoi(scanner.Text())
	var B int
	scanner.Scan()
	B, _ = strconv.Atoi(scanner.Text())
	var W int
	scanner.Scan()
	W, _ = strconv.Atoi(scanner.Text())
	solve(A, B, W)
}
