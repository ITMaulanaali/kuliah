
fun main(){

    val variableLambdaPenjumlahan: (Int, Int) -> Int = {a,b -> (a+b)}

    println(variableLambdaPenjumlahan(3,5))
}

/**
: (Int, Int) -> Int artinya memiliki 2 parameter Int dan mengreturn type Int. Return yang dilakukan adalah kode paling akhir
 */