package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

var (
	a           [][]int
	hMax        int
	wMax        int
	passedTiles []int
	sum         int
)

func solve(H int, W int, A [][]int) {
	hMax = H
	wMax = W
	a = A
	passedTiles = make([]int, 0, H+W-2)
	search(0, 0)
	fmt.Println(sum)
}

func search(h, w int) {
	tile := a[h][w]
	if isUnique(tile) {
		passedTiles = append(passedTiles, tile)
	} else {
		return
	}
	if h+1 == hMax && w+1 == wMax {
		sum++
	}
	if h+1 != hMax {
		search(h+1, w)
	}
	if w+1 != wMax {
		search(h, w+1)
	}
}

func isUnique(n int) bool {
	if len(passedTiles) == 0 {
		return true
	}
	sort.Ints(passedTiles)
	min := 0
	max := len(passedTiles) - 1
	for min <= max {
		i := (min + max) / 2
		tile := passedTiles[i]
		switch {
		case tile == n:
			return false
		case tile > n:
			max = i - 1
		case tile < n:
			min = i + 1
		}
	}
	return true
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var H int
	scanner.Scan()
	H, _ = strconv.Atoi(scanner.Text())
	var W int
	scanner.Scan()
	W, _ = strconv.Atoi(scanner.Text())
	A := make([][]int, H)
	for i := 0; i < H; i++ {
		A[i] = make([]int, W)
	}
	for i := 0; i < H; i++ {
		for j := 0; j < W; j++ {
			scanner.Scan()
			A[i][j], _ = strconv.Atoi(scanner.Text())
		}
	}
	solve(H, W, A)
}
