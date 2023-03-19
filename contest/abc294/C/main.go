package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	n, _ := strconv.Atoi(scanner.Text())
	scanner.Scan()
	m, _ := strconv.Atoi(scanner.Text())
	a := make([]int, n)
	for i := 0; i < n; i++ {
		scanner.Scan()
		a[i], _ = strconv.Atoi(scanner.Text())
	}
	b := make([]int, m)
	for i := 0; i < m; i++ {
		scanner.Scan()
		b[i], _ = strconv.Atoi(scanner.Text())
	}
	c := make([]int, 0, n+m)
	c = append(a, b...)
	sort.Ints(c)
	var (
		ba strings.Builder
		bb strings.Builder
		ia int
	)
	for i := 0; i < n+m; i++ {
		if ia < len(a) && c[i] == a[ia] {
			ba.WriteString(fmt.Sprintf("%d ", i+1))
			ia++
		} else {
			bb.WriteString(fmt.Sprintf("%d ", i+1))
		}
	}
	fmt.Println(strings.TrimSuffix(ba.String(), " ") + "\n" + strings.TrimSuffix(bb.String(), " "))
}
