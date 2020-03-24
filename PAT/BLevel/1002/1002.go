// 1002 写出这个数
// auguralpha
// 2020-03-24

package main

import "fmt"

func main() {
	var n string
	var cnt int = 0
	var str = [10]string{"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"}
	var ans [10]int
	_, _ = fmt.Scanf("%s", &n)
	for i := 0; i < len(n); i ++ {
		cnt += int(n[i] - '0')
	}
	var m int = 0
	for cnt != 0 {
		ans[m] = cnt % 10
		m ++
		cnt /= 10
	}

	for i := m - 1; i >= 0; i -- {
		if i != 0 {
			fmt.Printf("%s ", str[ans[i]])
		} else {
			fmt.Printf("%s\n", str[ans[i]])
		}
	}
}
