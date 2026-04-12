fun main() {  
    print("Enter a number1: ") 
    var a:Int=readLine()!!.toInt()
    print("Enter a number2: ") 
    var b:Int=readLine()!!.toInt()
    var c=max(a,b)
    var d=min(a,b)
    println("Number1 x Number2 is ${a*b}")
    println("bigger one is $c")
    println("smaller one is $d")
    }