// 1017 A除以B
// auguralpha
// 2020-03-26

package main

import "fmt"

func main() {
	var a string
	var b int
	var q int = 0
	var r int = 0

	_, _ = fmt.Scanf("%s %d", &a, &b)

	q = int(a[0] - '0') / b
	if len(a) == 1 || (q != 0 && len(a) > 1) {
		fmt.Printf("%d", q)
	}

	r = int(a[0] - '0') % b
	for i := 1; i < len(a); i ++ {
		q =  (int(a[i] - '0') + r * 10) / b
		r =  (int(a[i] - '0') + r * 10) % b
		fmt.Printf("%d", q)
	}
	fmt.Printf(" %d\n", r)
}
