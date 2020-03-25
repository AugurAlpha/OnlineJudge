// 1007 素数对猜想
// auguralpha
// 2020-03-25

package main

import "fmt"

func ifPrime(m int) bool {
	for i := 2; i * i <= m; i ++ {
		if m % i == 0 {
			return false
		}
	}
	return true
}

func main() {
	var n int
	var prime []int
	var ans int = 0
	_, _ = fmt.Scanf("%d", &n)
	for i := 1; i <= n; i ++ {
		if ifPrime(i) {
			prime = append(prime, i)
		}
	}

	for i := 0; i < len(prime) - 1; i ++ {
		if prime[i+1] - prime[i] == 2 {
			ans ++
		}
	}

	fmt.Printf("%d\n", ans)
}
