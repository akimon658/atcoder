package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func solve(A int, B int) {
	if A < B {
		A, B = B, A
	}
	result := A/B - 1
	A = B + A%B
	x := gcd(A, B)
	for n := 2; ; n++ {
		if fib(n) == A/x {
			result += n - 2
			break
		}
	}
	fmt.Println(result)
}

var squrt5 float64 = math.Sqrt(5)

func fib(n int) int {
	floatN := float64(n)
	f := (math.Pow((1+squrt5)/2, floatN) - math.Pow((1-squrt5)/2, floatN)) / squrt5
	return int(math.Round(f))
}

func gcd(a, b int) int {
	if a%b == 0 {
		return b
	}
	return gcd(b, a%b)
}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var A int
	scanner.Scan()
	A, _ = strconv.Atoi(scanner.Text())
	var B int
	scanner.Scan()
	B, _ = strconv.Atoi(scanner.Text())
	solve(A, B)
}
