// 1011 A+B 和 C
// auguralpha
// 2020-03-25

package main

import "fmt"

func main() {
	var t int
	var a, b, c int64
	_, _ = fmt.Scanf("%d", &t)
	for i := 1; i <= t; i ++ {
		_, _ = fmt.Scanf("%d%d%d", &a, &b, &c)
		if a + b > c {
			fmt.Printf("Case #%d: true\n", i)
		} else {
			fmt.Printf("Case #%d: false\n", i)
		}
	}

}
