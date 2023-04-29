package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

const YES = "Yes"
const NO = "No"

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	h, _ := strconv.Atoi(scanner.Text())
	scanner.Scan()
	w, _ := strconv.Atoi(scanner.Text())
	a := make([][]int, h)
	for i := 0; i < h; i++ {
		ah := make([]int, w)
		for j := 0; j < w; j++ {
			scanner.Scan()
			ah[j], _ = strconv.Atoi(scanner.Text())
		}
		a[i] = ah
	}
	b := make([][]int, h)
	for i := 0; i < h; i++ {
		bh := make([]int, w)
		for j := 0; j < w; j++ {
			scanner.Scan()
			bh[j], _ = strconv.Atoi(scanner.Text())
		}
		b[i] = bh
	}
	a2 := make([][]int, h)
	for i := 0; i < h; i++ {
	l:
		for j := 0; j < w; j++ {
			for s := 0; s < h; s++ {
				a2[i] = append(a[i][s:], a[i][0:s]...)
				for t := 0; t < w; t++ {
					if a[s][t] != b[i][j] {
						continue l
					}
				}
			}
			fmt.Println(YES)
			os.Exit(0)
		}
	}
	fmt.Println(NO)
}
