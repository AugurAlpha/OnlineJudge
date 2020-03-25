// 1008 数组元素循环右移问题
// auguralpha
// 2020-03-25

package main

import "fmt"

func main() {
	var n, m int
	var arr []int
	_, _ = fmt.Scanf("%d %d ", &n, &m)
	m = m % n
	for i := 0; i < n; i ++ {
		var a int
		_, _ = fmt.Scanf("%d", &a)
		arr = append(arr, a)
	}

	for i := 0; i < len(arr); i ++ {
		if i - n + 1 == 0 {
			fmt.Printf("%d\n", arr[(n - m + i) % n])
		} else {
			fmt.Printf("%d ", arr[(n - m + i) % n])
		}

	}
}
