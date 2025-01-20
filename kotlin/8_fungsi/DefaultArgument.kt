
fun main(){

    penjumlahanPersegi(5,5)
}

fun penjumlahanPersegi(panjang: Int, lebar: Int? = null, tinggi: Int = 2){
    val hasil: Int = panjang + tinggi
    println("Hasil penjumlahanya adalah: $hasil")
}