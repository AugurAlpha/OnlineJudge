// 1006 换个格式输出整数
// auguralpha
// 2020-03-25

package main

import "fmt"

func main() {
	var n int
	var ans []int
	_, _ = fmt.Scanf("%d", &n)
	for i :=0; i < 3; i ++ {
		ans = append(ans, n % 10)
		n /= 10
	}

	for i := 0; i < ans[2]; i ++ {
		fmt.Printf("%s", "B")
	}
	for i := 0; i < ans[1]; i ++ {
		fmt.Printf("%s", "S")
	}
	for i := 1; i <= ans[0]; i ++ {
		fmt.Printf("%d", i)
	}
}
