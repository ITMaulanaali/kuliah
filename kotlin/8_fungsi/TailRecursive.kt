
fun main(){

    val hasil: Int = faktorial(3)
    println(hasil)
}

tailrec fun faktorial(a: Int, total: Int = 1): Int{
    return when(a){
        1 -> total
        else -> faktorial(a -1, total + a)
    }
}

/**
compiler kotlin akan merubah recursice menjadi looping biasa sehingga menghindari stack overflow
 */