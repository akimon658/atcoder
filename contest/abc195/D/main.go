package main

import (
	"bufio"
	"os"
	"strconv"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	scanner.Scan()
	m, _ := strconv.Atoi(scanner.Text())
	scanner.Scan()
	q, _ := strconv.Atoi(scanner.Text())
	w := make([]int, n)
	v := make([]int, n)
	for i := 0; i < n; i++ {
		scanner.Scan()
		w[i], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		v[i], _ = strconv.Atoi(scanner.Text())
	}
	x := make([]int, m)
	for i := 0; i < m; i++ {
		scanner.Scan()
		x[i], _ = strconv.Atoi(scanner.Text())
	}
	query := make([][2]int, q)
	for i := 0; i < q; i++ {
		scanner.Scan()
		query[i][0], _ = strconv.Atoi(scanner.Text())
		scanner.Scan()
		query[i][1], _ = strconv.Atoi(scanner.Text())
	}
}
