package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	var result string
	for i := 0; i < n; i++ {
		scanner.Scan()
		a, _ := strconv.Atoi(scanner.Text())
		if a%2 == 0 {
			result = fmt.Sprintf("%s %d", result, a)
		}
	}
	fmt.Println(strings.TrimPrefix(result, " "))
}
