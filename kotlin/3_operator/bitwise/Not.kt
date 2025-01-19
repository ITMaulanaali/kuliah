
fun main() {

    val a: Int = 3
    var hasil = a.inv()

    val bitA = a.toString(2).padStart(8,'0')
    val bitHasil = hasil.toString(2).padStart(8,'0')

    println("Hasil bitwise not variable a adalah:")
    println(bitA)
    println(bitHasil)
}
