
fun main(){

    val a: IntRange = 1..5
    for(i in a){
        println(i)
    }

    val hasil: Boolean = 3 in a
    println("apakah 3 in  a:    $hasil")
    println("apakah 3 !in a:    ${3 !in a}")
}

/*
in secara mekanisme adalah dapat memanggil fungsi dari objek intRange sehingga in sebenarnya adalah template untuk memanggil fungsi

eskpressi untuk mengecek nilai 3 apakah ada dalam suatu koleksi data(alamat variable yang menyimpan kumpulan nilai) akan menjadi: IntRange.contains(3) yang mengreturn boolean
begitu juga untuk eskpressi i in a akan sama saja dengan fungsi untuk mencopy tiap nilai ke i.
*/