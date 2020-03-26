// 1015 德才论
// auguralpha
// 2020-03-26

package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
	"strings"
)

type Student struct {
	num int
	de int
	cai int
}

type Students []Student

func main() {
	var inputReader *bufio.Reader
	inputReader = bufio.NewReader(os.Stdin)

	var n, low, high int
	_, _ = fmt.Scanf("%d %d %d ", &n, &low, &high)
	var slice [4]Students
	var temp Student
	var total int = n

	for i := 0; i < n; i ++ {
		// 这个地方因为有三个样例超时
		// 在IO层吧scanf换成bufio 节约输入输出的时间
		// _, _ = fmt.Scanf("%d %d %d ", &temp.num, &temp.de, &temp.cai)
		str,_ := inputReader.ReadString('\n')
		strArray := strings.Fields(str)
		temp.num, _ = strconv.Atoi(strArray[0])
		temp.de, _ = strconv.Atoi(strArray[1])
		temp.cai, _ = strconv.Atoi(strArray[2])

		if temp.de < low || temp.cai < low {
			total --
		} else if temp.de >= high && temp.cai >= high {
			slice[0] = append(slice[0], temp)
		} else if temp.de >= high && temp.cai < high {
			slice[1] = append(slice[1], temp)
		} else if temp.de < high && temp.cai < high && temp.de >= temp.cai {
			slice[2] = append(slice[2], temp)
		} else {
			slice[3] = append(slice[3], temp)
		}
	}

	fmt.Printf("%d\n", total)
	for k := 0; k < 4; k ++ {
		sort.Slice(slice[k], func(i, j int)bool {
			if (slice[k][i].de + slice[k][i].cai) != (slice[k][j].de + slice[k][j].cai) {
				return (slice[k][i].de + slice[k][i].cai) > (slice[k][j].de + slice[k][j].cai)
			} else if slice[k][i].de != slice[k][j].de {
				return slice[k][i].de > slice[k][j].de
			} else {
				return slice[k][i].num < slice[k][j].num
			}
		})

		for i := 0; i < len(slice[k]); i ++ {
			fmt.Printf("%d %d %d\n", slice[k][i].num, slice[k][i].de, slice[k][i].cai)
		}
	}
}
