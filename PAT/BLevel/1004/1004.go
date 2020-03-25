// 1004 成绩排名
// auguralpha
// 2020-03-25

package main

import "fmt"

func main() {
	var n int
	var minName string = ""
	var minStudentId string = ""
	var minScore int8 = 101

	var maxName string = ""
	var maxStudentId string = ""
	var maxScore int8 = -1
	_, _ = fmt.Scanf("%d", &n)
	for n != 0 {
		n --
		var name, studentId string
		var score int8
		_, _ = fmt.Scanf("%s %s %d", &name, &studentId, &score)
		if score < minScore {
			minName = name
			minStudentId = studentId
			minScore = score
		}

		if score > maxScore {
			maxName = name
			maxStudentId = studentId
			maxScore= score
		}
	}

	fmt.Printf("%s %s\n", maxName, maxStudentId)
	fmt.Printf("%s %s\n", minName, minStudentId)
}
