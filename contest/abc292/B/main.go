package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

const YES = "Yes"
const NO = "No"

func solve(n, q int, event [][2]int) {
	player := make([]int, n+1)
	for i := 0; i < q; i++ {
		if event[i][0] == 3 {
			result := NO
			if player[event[i][1]] >= 2 {
				result = YES
			}
			fmt.Println(result)
		} else {
			player[event[i][1]] += event[i][0]
		}
	}
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	nq := strings.Split(scanner.Text(), " ")
	n, _ := strconv.Atoi(nq[0])
	q, _ := strconv.Atoi(nq[1])
	event := make([][2]int, q)
	for i := 0; i < q; i++ {
		scanner.Scan()
		s := strings.Split(scanner.Text(), " ")
		event[i][0], _ = strconv.Atoi(s[0])
		event[i][1], _ = strconv.Atoi(s[1])
	}
	solve(n, q, event)
}
