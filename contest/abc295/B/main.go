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
	r, _ := strconv.Atoi(scanner.Text())
	scanner.Scan()
	c, _ := strconv.Atoi(scanner.Text())
	b := make([][]string, r)
	for i := 0; i < r; i++ {
		br := make([]string, c)
		for j := 0; j < c; j++ {
			scanner.Scan()
			br[j] = scanner.Text()
		}
		b[i] = br
	}
	for i := 0; i < r; i++ {
		for j := 0; j < c; j++ {
			thisSquare := b[i][j]
			if isBomb(thisSquare) {
				power, _ := strconv.Atoi(thisSquare)
				for k := 0; k <= power; k++ {
					row1 := b[safeIndex(i+k, r)]
					row2 := b[safeIndex(i-k, r)]
					for l := 0; l <= power-k; l++ {
						if !isBomb(row1[safeIndex(j+l, c)]) {
							row1[safeIndex(j+l, c)] = "."
						}
						if !isBomb(row1[safeIndex(j-l, c)]) {
							row1[safeIndex(j-l, c)] = "."
						}
						if !isBomb(row2[safeIndex(j+l, c)]) {
							row2[safeIndex(j+l, c)] = "."
						}
						row2[safeIndex(j-l, c)] = "."
					}
				}
			}
		}
	}
	var builder strings.Builder
	for i := 0; i < r; i++ {
		for j := 0; j < c; j++ {
			builder.WriteString(b[i][j])
		}
		builder.WriteString("\n")
	}
	fmt.Print(builder.String())
}

func isBomb(square string) bool {
	return square != "." && square != "#"
}

func safeIndex(i, lim int) int {
	switch {
	case i > lim-1:
		return lim - 1
	case i < 0:
		return 0
	default:
		return i
	}
}
