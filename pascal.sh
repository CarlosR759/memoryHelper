#!/bin/sh


### Functions ###
Factorial (){
    i=1
    total=1
    while [ "$i" -le "$1" ]
    do
        total=$((i * total)) 
        i=$((i + 1))
    done 
    echo "$total"
    return  "$total"
}

PrintTriangle (){
    n="$1"
    k="0"
    while [ "$k" -le "$n" ] 
    do
        PrintSpaces $((n - k))
        PrintFloor "0" "$k"  
        echo " "
        k=$(("$k" + 1))
    done
}

PrintSpaces (){
    i=0
    while [ "$i" -le "$1" ]
    do
        printf ' ' 
        i=$((i + 1))
    done 

}

PrintFloor (){
    kCopy="$1"
    factorialN=$(Factorial "$2")
    
    while [ "$kCopy" -le "$2" ]
    do
        factorialK=$(Factorial "$kCopy")
        factorialNMinusK=$(Factorial $(("$2" - "$kCopy")))
        result=$(("$factorialK" * "$factorialNMinusK")) 
        result=$(("$factorialN" / "$result"))
        kCopy=$(("$kCopy" + 1))
        printf "%d " $result
    done   
}


### Main ###
echo " ------------------------"
echo "|    Pascal Triangles    |"
echo " ------------------------"
echo "How many floors do you want to print ?: "
read -r input

PrintTriangle "$input"
