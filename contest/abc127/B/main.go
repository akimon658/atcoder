package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func solve(r, d, x int) {
	for i := 0; i < 10; i++ {
		x1 := r*x - d
		fmt.Println(x1)
		x = x1
	}
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	inputStr := strings.Split(scanner.Text(), " ")
	var input [3]int
	for i := 0; i < 3; i++ {
		input[i], _ = strconv.Atoi(inputStr[i])
	}
	solve(input[0], input[1], input[2])
}
