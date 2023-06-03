package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strings"
)

const YES = "Yes"
const NO = "No"

func solve(S string, T string) {
	s := strings.Split(S, "")
	t := strings.Split(T, "")
	sort.Strings(s)
	sort.Strings(t)
	var (
		atS int
		atT int
	)
	for i := range s {
		if s[i] == "@" {
			atS++
		}
		if t[i] == "@" {
			atT++
		}
		if s[i] != "@" && t[i] != "@" {
			break
		}
	}
	tI := atT
	for i := atS; i < len(s); i++ {
		switch {
		case tI == len(t) || s[i] < t[tI]:
			atT--
			if atT < 0 || !isAtCoder(s[i]) {
				fmt.Println(NO)
				os.Exit(0)
			}

		case s[i] > t[tI]:
			atS--
			if atS < 0 || !isAtCoder(t[tI]) {
				fmt.Println(NO)
				os.Exit(0)
			}
			if tI < len(t) {
				tI++
			}

		default:
			if tI < len(t) {
				tI++
			}
		}
	}
	for i := tI; i < len(t); i++ {
		atS--
		if atS < 0 || !isAtCoder(t[i]) {
			fmt.Println(NO)
			os.Exit(0)
		}
	}
	fmt.Println(YES)
}

func isAtCoder(s string) bool {
	atcoder := []string{"a", "t", "c", "o", "d", "e", "r"}
	for i := range atcoder {
		if s == atcoder[i] {
			return true
		}
	}
	return false
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var S string
	scanner.Scan()
	S = scanner.Text()
	var T string
	scanner.Scan()
	T = scanner.Text()
	solve(S, T)
}
