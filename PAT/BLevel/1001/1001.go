// 1001 害死人不偿命的(3n+1)猜想
// auguralpha
// 2020-03-24
package main

import "fmt"

func main() {
	var n uint16
	var ans uint8 = 0
	_, _ = fmt.Scanf("%d", &n)
	for n != 1 {
		if n % 2 == 0 {
			n /= 2
		} else {
			n = (n * 3 + 1 ) / 2
		}
		ans ++
	}

	fmt.Printf("%d\n", ans)
}
