
fun main(){

    penjumlahan(5,5)
    namaKu("lana")
}

//fungsi 2 parameter
fun penjumlahan(a: Int, b: Int): Unit{
    val hasil: Int = a + b
    println("Penjumlahan dari keduanya adalah: $hasil")
}

fun namaKu(nama: String): Unit{
    println("namaku adalah: $nama")
}