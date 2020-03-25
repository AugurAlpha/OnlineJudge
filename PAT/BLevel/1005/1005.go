// 1005 继续(3n+1)猜想
// auguralpha
// 2020-03-25

package main

import (
	"fmt"
	"sort"
)

var N []int
var Mark []bool
var Ans []int

func threeN(m int) {
	for m != 1 {
		if m % 2 == 0 {
			m /= 2
		} else {
			m = (m * 3 + 1) / 2
		}

		Presence(m)
	}
}

func Presence(m int) {
	for i := 0; i < len(N); i ++ {
		if m == N[i] {
			Mark[i] = true
			return
		}
	}
}

func main() {
	var k int
	_, _ = fmt.Scanf("%d", &k)
	for i := 0; i < k; i ++ {
		var m int
		_, _ = fmt.Scanf("%d", &m)
		N = append(N, m)
		Mark = append(Mark, false)
	}

	for i := 0; i < len(N); i ++ {
		threeN(N[i])
	}

	for i := 0; i < len(N); i ++ {
		if !Mark[i] {
			Ans = append(Ans, N[i])
		}
	}
	sort.Slice(Ans, func(i, j int)bool {
		return Ans[i] > Ans[j]
	})
	for i := 0; i < len(Ans); i ++ {
		if i == len(Ans) - 1 {
			fmt.Printf("%d\n", Ans[i])
		} else {
			fmt.Printf("%d ", Ans[i])
		}
	}
}
