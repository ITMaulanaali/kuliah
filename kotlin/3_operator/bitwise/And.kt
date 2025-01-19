
fun main() {

    val a: Int = 3
    val b: Int = 6
    var hasil = a and b

    val bitA = a.toString(2).padStart(8,'0')
    val bitB = b.toString(2).padStart(8,'0')
    val bitHasil = hasil.toString(2).padStart(8,'0')

    println("Hasil bitwise and variable a dan b adalah:")
    println(bitA)
    println(bitB)
    println(bitHasil)
}
