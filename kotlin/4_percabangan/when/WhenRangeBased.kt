
fun main() {

    val nilai = 85
    when (nilai) {
        in 90..100 -> println("A")
        in 80..89 -> println("B")
        in 70..79 -> println("C")
        else -> println("D")
    }
}
