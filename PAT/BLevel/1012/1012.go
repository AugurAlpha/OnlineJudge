// 1012 数字分类
// auguralpha
// 2020-03-25

package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	var a int
	var sumA1 int = 0
	var sumA2 int = 0
	var sumA4 float64 = 0.0
	var cntA2 int = 0
	var cntA3 int = 0
	var cntA4 int = 0
	var maxA5 int = 0
	_, _ = fmt.Scanf("%d", &n)
	for n != 0 {
		n --
		_, _ = fmt.Scanf("%d", &a)
		if a % 5 == 0 {
			if a % 2 ==  0 {
				sumA1 += a
			}
		} else if a % 5 == 1 {
			sumA2 += int(math.Pow(-1, float64(cntA2))) * a
			cntA2 += 1
		} else if a % 5 == 2 {
			cntA3 ++
		} else if a % 5 == 3 {
			sumA4 += float64(a)
			cntA4 ++
		} else {
			if a > maxA5 {
				maxA5 = a
			}
		}
	}

	if sumA1 != 0 {
		fmt.Printf("%d ", sumA1)
	} else {
		fmt.Print("N ")
	}

	if cntA2 != 0 {
		fmt.Printf("%d ", sumA2)
	} else {
		fmt.Print("N ")
	}

	if cntA3 != 0 {
		fmt.Printf("%d ", cntA3)
	} else {
		fmt.Print("N ")
	}

	if cntA4 != 0 {
		fmt.Printf("%.1f ", sumA4 / float64(cntA4))
	} else {
		fmt.Print("N ")
	}

	if maxA5 != 0 {
		fmt.Printf("%d\n", maxA5)
	} else {
		fmt.Print("N\n")
	}
}
