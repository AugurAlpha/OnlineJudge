// 1013 数素数
// auguralpha
// 2020-03-25

package main

import "fmt"

// 判断素数
func isPrime(n int) bool {
	for i := 2; i * i <= n; i  ++ {
		if n % i == 0 {
			return false
		}
	}
	return true
}

func main() {
	var m, n int
	var cnt int
	var ans []int
	_, _ = fmt.Scanf("%d%d", &m, &n)
	for i := 2; ; i ++ {
		if isPrime(i) {
			cnt ++
			if m <= cnt && n >= cnt {
				ans = append(ans, i)
			}
		}

		if n < cnt {
			break
		}
	}

	for i := 0; i < len(ans); i ++ {
		if i % 10 == 9 || i == len(ans) - 1 {
			fmt.Printf("%d\n", ans[i])
		} else {
			fmt.Printf("%d ", ans[i])
		}
	}
}
