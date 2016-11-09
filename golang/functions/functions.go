package main

import (
    "math"
    "fmt"
)

var global int = 5

func add(x int, y int) int {
    return x + y
}

func addFive(x int) int {
    var five int  = 5
    return x + five
}

func countToTen() {
    for i := 1; i <= 10; i++ {
        fmt.Println(i)
    }
}

func main() {
    fmt.Println("Pi = ", math.Pi)
    fmt.Println(add(35, 65))
    fmt.Println(addFive(65))
    countToTen();
}
