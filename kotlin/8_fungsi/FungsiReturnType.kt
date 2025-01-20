
fun main(){

    println("hasil penjumlahan: ${penjumlahan(5,5)}")
    println("namaku adalah: ${namaKu("lana")}")
}

fun penjumlahan(a: Int, b: Int): Int{
    val hasil: Int = a + b
    return hasil
}

fun namaKu(nama: String): String{
    return nama
}