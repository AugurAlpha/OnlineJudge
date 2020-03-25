// 1010 一元多项式求导
// auguralpha
// 2020-03-25

package main

import "fmt"

func main() {
	var a, b int
	var mark bool = false
	for true {
		_, err := fmt.Scanf("%d%d", &a, &b)
		if err != nil {
			break
		}

		if b != 0 {
			if mark {
				fmt.Printf(" %d %d", a * b, b - 1)
			} else {
				fmt.Printf("%d %d", a * b, b - 1)
				mark = true
			}
		}
	}

	if !mark {
		fmt.Println("0 0")
	} else {
		fmt.Println("")
	}
}
