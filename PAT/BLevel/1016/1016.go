// 1016 部分A+B
// auguralpha
// 2020-03-26

package main

import "fmt"

func main() {
	var a, b string
	var da, db int
	var pa int = 0
	var pb int = 0

	_, _ = fmt.Scanf("%s %d %s %d", &a, &da, &b, &db)
	for i := 0; i < len(a); i ++ {
		if a[i] - '0' == uint8(da) {
			pa = pa * 10 + da
		}
	}
	for i := 0; i < len(b); i ++ {
		if b[i] - '0' == uint8(db) {
			pb = pb * 10 + db
		}
	}

	fmt.Printf("%d\n", pa + pb)
}
