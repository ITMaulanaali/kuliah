
fun main() {

    val a: Int = 3
    var hasil = a shl 1

    val bitA = a.toString(2).padStart(8,'0')
    val bitHasil = hasil.toString(2).padStart(8,'0')

    println("Hasil bitwise Shift left 1kali variable a adalah:")
    println(bitA)
    println(bitHasil)
}
