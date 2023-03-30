package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	a := make([]int, n)
	for i := 0; i < n; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	sort.Ints(a)
	var (
		max  int
		maxK int
	)
	for k := 2; k <= a[len(a)-1]; k++ {
		var sum int
		for i := 0; i < n; i++ {
			if a[i]%k == 0 {
				sum++
			}
		}
		if sum > max {
			max = sum
			maxK = k
		}
	}
	fmt.Println(maxK)
}
