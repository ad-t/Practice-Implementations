package main

import (
    "fmt"
    "io/ioutil"
)

func main () {
    dir, err := ioutil.ReadDir(".")
    if err != nil {
        fmt.Println("errors!")
    }
    for index, file := range dir {
        if file.Size() > 50 {
            fmt.Println("Big files! (", index, ")")
        } else {
            fmt.Println("small files :(")
        }
    }
}
