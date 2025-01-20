
fun main(){

    var hasil: Int = faktorial(3)
    println(hasil)
}

fun faktorial(a: Int): Int{
    when(a){
        1 -> return a
    else -> return a * faktorial(a-1)
    }
}

/**
Fungsi rekursif ini akan memanggil fungsi dan variable a baru yang dikurangi 1 sehingga blok memory stack akan terpakai sebanyak pemanggilan function.
Jika pemanggilan terlalu banyak hingga menghabiskan alokasi stack memory akan menyebabkan stack overflow.

Berbeda dengan looping biasa yang hanya mengalokasi satu blok memory stack untuk satu variable yang di iterasi tidakakn pernah terkena stack overflow
Oleh karena itu terdapat talRecursive untuk recursive function yang ketika dicompile akan dirubah menjadi looping biasa
 */