
fun main(){

    println("Nilai dari 3parameter: ${volumePersegi(4,3,2)}")
    volumePersegi(2)
    println("Nilai dari double parameter: ${volumePersegi(2.5)}")
}

fun volumePersegi(panjang: Int, lebar: Int, tinggi: Int): Int{
    val luas: Int = panjang * lebar * tinggi
    return luas
}

fun volumePersegi(panjang: Int): Unit{
    val luas: Int = panjang * panjang * panjang
    println("nilai volumePersegi dari fungsi tanpa kembalian: $luas")
}

fun volumePersegi(panjang: Double): Double{
    val luas: Double = panjang * panjang * panjang
    return luas
}