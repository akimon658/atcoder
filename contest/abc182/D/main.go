package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	var (
		currentPos int
		max        int
		move       int
		moveMax    int
	)
	for i := 0; i < n; i++ {
		scanner.Scan()
		a, _ := strconv.Atoi(scanner.Text())
		move += a
		if move > moveMax {
			moveMax = move
		}
		if currentPos+moveMax > max {
			max = currentPos + moveMax
		}
		currentPos += move
	}
	fmt.Println(max)
}
