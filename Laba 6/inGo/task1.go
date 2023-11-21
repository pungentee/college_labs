package main

import "fmt"

func getAmountOfDigits(number int) (result int) {
	for number != 0 {
		result++
		number /= 10
	}
	return
}

func main() {
	var number, count, sum int

	for getAmountOfDigits(number) != 3 {
		fmt.Print("Enter a number: ")
		fmt.Scanln(&number)
		count++
		if number >= -4 && number < 11 {
			sum += number
		}
	}

	fmt.Printf("Amount of numbers: %v\n", count)
	fmt.Printf("Sum of numbers in [-4;11): %v\n", sum)
}
