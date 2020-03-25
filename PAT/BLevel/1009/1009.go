// 1009 说反话
// auguralpha
// 2020-03-25

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	inputReader := bufio.NewReader(os.Stdin)
	s, _ := inputReader.ReadString('\n')
	var tmp string = ""
	var ans []string
	for i := 0; i < len(s); i ++ {
		if s[i] != ' ' && s[i] != '\n' {
			tmp += string(s[i])
		} else {
			ans = append(ans, tmp)
			tmp = ""
		}
	}
	for i := len(ans) - 1; i >= 0; i -- {
		if i == 0 {
			fmt.Printf("%s\n", ans[i])
		} else {
			fmt.Printf("%s ", ans[i])
		}
	}
}
