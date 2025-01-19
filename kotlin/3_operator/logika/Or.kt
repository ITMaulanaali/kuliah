
fun main() {
    
    val a: Boolean = true
    val b: Boolean = false

    val logikaOr_11 = a || a
    val logikaOr_10 = a || b
    val logikaOr_01 = b || a
    val logikaOr_00 = b || b

    println("Hasil logika OR true-true adalah:     $logikaOr_11")
    println("Hasil logika OR true-false adalah:    $logikaOr_10")
    println("Hasil logika OR flase-true adalah:    $logikaOr_01")
    println("Hasil logika OR false-false adalah:   $logikaOr_00")
}
