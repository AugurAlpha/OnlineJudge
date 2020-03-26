// 1014 福尔摩斯的约会
// auguralpha
// 2020-03-26

package main

import "fmt"

func main() {
	var days = []string{"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"}
	var str1, str2, str3, str4 string
	_, _ = fmt.Scanf("%s ", &str1)
	_, _ = fmt.Scanf("%s ", &str2)
	_, _ = fmt.Scanf("%s ", &str3)
	_, _ = fmt.Scanf("%s ", &str4)
	var mark bool = false
	for i := 0; i < len(str1); i ++ {
		if str1[i] == str2[i] && !mark && str1[i] > 64 && str1[i] < 72 {
			fmt.Printf("%s ", days[str1[i] - 65])
			mark = true
		} else if mark && str1[i] == str2[i] && ((str1[i] > 64 && str1[i] < 79) || (str1[i] > 47 && str1[i] < 58)) {
			if str1[i] > 64 && str1[i] < 79 {
				fmt.Printf("%02d:", str1[i] - 55)
			} else {
				fmt.Printf("%02d:", str1[i] - 48)
			}
			break
		}
	}

	for i := 0; i < len(str3); i ++ {
		if str3[i] == str4[i] && ((str3[i] > 96 && str3[i] < 123) || (str3[i] > 64 && str3[i] < 91)) {
			fmt.Printf("%02d\n", i)
		}
	}
}
