package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	min := 2
	max := n - 1
	for {
		half := (min + max) / 2
		s := ask(scanner, half)
		if min >= max {
			result := half
			if s == 1 {
				result--
			}
			fmt.Printf("! %d\n", result)
			os.Exit(0)
		}
		if s == 0 {
			min = half + 1
		} else {
			max = half - 1
		}
	}
}

func ask(scanner *bufio.Scanner, n int) int {
	fmt.Printf("? %d\n", n)
	scanner.Scan()
	in, _ := strconv.Atoi(scanner.Text())
	return in
}
