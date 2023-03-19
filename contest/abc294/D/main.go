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
	scanner.Scan()
	q, _ := strconv.Atoi(scanner.Text())
	notCalled := 1
	called := make([]int, 0, n)
	var builder strings.Builder
	for i := 0; i < q; i++ {
		scanner.Scan()
		event, _ := strconv.Atoi(scanner.Text())
		switch event {
		case 1:
			called = append(called, notCalled)
			notCalled++
		case 2:
			scanner.Scan()
			x, _ := strconv.Atoi(scanner.Text())
			min := 0
			max := len(called) - 1
			var i int
		l:
			for min <= max {
				iLocal := (min + max) / 2
				switch {
				case called[iLocal] == x:
					i = iLocal
					break l
				case called[iLocal] > x:
					max = iLocal - 1
				default:
					min = iLocal + 1
				}
			}
			called = append(called[:i], called[i+1:]...)
		case 3:
			builder.WriteString(fmt.Sprintf("%d\n", called[0]))
		}
	}
	fmt.Print(builder.String())
}
