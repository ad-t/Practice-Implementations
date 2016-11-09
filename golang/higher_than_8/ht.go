package main

import (
    "fmt"
    "strings"
)

func main() {
    higher_than_8 := func (r rune) rune {
        switch {
            case r > '8' && r <= '9':
                return '>'
            case r < '8' && r >= '0':
                return '<'
            default:
                return r
        }
    }

    for {
        var in string
        fmt.Scanln(&in)
        if in != "" {
            fmt.Println(strings.Map(higher_than_8, in))
        }
    }
}
