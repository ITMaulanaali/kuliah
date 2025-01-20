
fun main(){

    val angka: Int = 5
    angka.penjumlahan(2)

    val nama: String = "Lana"
    nama.namaKu()
}

fun Int.penjumlahan(a:Int): Unit{
    println("${this+a}")
}

//memberikan fungsi ke type data String
fun String.namaKu(): Unit = println("Nama Saya: $this")


/*
Memberikan tambahan fungsi atau extension kepada type data
 */