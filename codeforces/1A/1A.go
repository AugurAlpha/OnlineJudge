// A. Theatre Square
// auguralpha
// 2020-03-27

package main

import "fmt"

func main() {
	var n, m, a uint64
	_, _ = fmt.Scanf("%d%d%d", &n, &m, &a)
	fmt.Println(((n + a - 1 ) / a) * ((m + a - 1) / a))
}
