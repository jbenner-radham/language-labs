package main

import (
    "fmt"
    "strings"
)

func main() {
    var str = "Hello, world."
    fmt.Println(str)
    fmt.Println(strings.ToUpper(str))
    fmt.Println(strings.ToLower(str))
    fmt.Println(strings.Title(str))
}
