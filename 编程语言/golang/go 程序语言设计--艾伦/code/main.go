package main

import "fmt"

func main() {

	switch {
	case false:
		fmt.Println("The integer was <= 4")
		fallthrough
	case true:
		fmt.Println("The integer was <= 5")
		fallthrough
	case false:
		fmt.Println("The integer was <= 6")
		fallthrough
	case true:
		fmt.Println("The integer was <= 7")
	case true:
		fmt.Println("The integer was <= 8")

	default:
		fmt.Println("default case")
	}
}
