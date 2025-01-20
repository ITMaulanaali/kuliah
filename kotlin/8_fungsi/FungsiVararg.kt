
fun main(){

    variableArgumenstPenjumlahan(5,2,2,2,2,4,3,2)
}

fun variableArgumenstPenjumlahan(a: Int, vararg array: Int): Unit{

    var hasilPenjumlahan: Int = a;
    for(i in array){
        hasilPenjumlahan += i
    }

    println("Nilai penjumlahannya adalah: $hasilPenjumlahan")
}

/*
Pada variable argument atau tipe data array hanya bisa ditaruh di akhir atribut
 */