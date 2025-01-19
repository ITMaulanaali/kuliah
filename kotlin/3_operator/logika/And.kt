
fun main() {
    
    val a: Boolean = true
    val b: Boolean = false

    val logikaAnd_11 = a && a
    val logikaAnd_10 = a && b
    val logikaAnd_01 = b && a
    val logikaAnd_00 = b && b

    println("Hasil logika AND true-true adalah:     $logikaAnd_11")
    println("Hasil logika AND true-false adalah:    $logikaAnd_10")
    println("Hasil logika AND flase-true adalah:    $logikaAnd_01")
    println("Hasil logika AND false-false adalah:   $logikaAnd_00")
}
