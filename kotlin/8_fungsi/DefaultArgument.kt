
fun main(){

    penjumlahanPersegi(5,5)
}

fun penjumlahanPersegi(panjang: Int, lebar: Int, tinggi: Int = 2){
    val hasil: Int = panjang + lebar + tinggi
    println("Hasil penjumlahanya adalah: $hasil")
}