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
	scanner.Scan()
	h, _ := strconv.Atoi(strings.Split(scanner.Text(), " ")[0])
	s := make([][]string, h)
	var foundCookie bool
	var a, b, c, d int
	for i := 0; i < h; i++ {
		scanner.Scan()
		t := scanner.Text()
		s[i] = strings.Split(t, "")
		containsCookie := strings.Contains(t, "#")
		if !foundCookie && containsCookie {
			a = i
			c = strings.Index(t, "#")
			d = strings.LastIndex(t, "#")
			foundCookie = true
		}
		if foundCookie {
			if containsCookie {
				if c > strings.Index(t, "#") {
					c = strings.Index(t, "#")
				} else if d < strings.LastIndex(t, "#") {
					d = strings.LastIndex(t, "#")
				}
			} else {
				b = i - 1
				foundCookie = false
			}
			if i+1 == h {
				b = i
			}
		}
	}
	for i := a; i < b+1; i++ {
		for j := c; j < d+1; j++ {
			if s[i][j] == "." {
				fmt.Println(i+1, j+1)
				os.Exit(0)
			}
		}
	}
}
