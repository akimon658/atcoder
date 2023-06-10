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
	a := make([]int, n)
	for i := range a {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	scanner.Scan()
	q, _ := strconv.Atoi(scanner.Text())
	l := make([]int, q)
	r := make([]int, q)
	for i := range l {
		scanner.Scan()
		l[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		r[i], _ = strconv.Atoi(scanner.Text())
	}
	sums := make([]int, a[n-1]+1)
	var sleeping bool
	var aIndex, sum int
	for i := range sums {
		if sleeping {
			sum++
		}
		if aIndex < n && a[aIndex] == i {
			if i != 0 {
				sleeping = !sleeping
			}
			aIndex++
		}
		sums[i] = sum
	}
	for i := range l {
		fmt.Println(sums[r[i]] - sums[l[i]])
	}
}
