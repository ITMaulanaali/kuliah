
fun main(){

    var inputUser: String?

    print("Masukan umurmu dari 5-18 tahun: ")
    inputUser = readLine()
    //mengassign nilai null yang dikonversi ke nilai yang tidak bisa null ke variable yang bisa menyimpan nilai tidak/bukan null juga
    val hasilInputan: Int = inputUser?.toIntOrNull()!!

    if(hasilInputan >= 5 && hasilInputan < 10){
        println("Anda masih anak kecil")
    }else if(hasilInputan >= 10 && hasilInputan <= 18){
        println("Anda sudah remaja")
    }else{
        println("Anda tidak memasukan rentang tahun dengan benar")
    }
}

/*
Mengconversi variable null menjadi not null agar tidak ada exception. Karena harusnya deklarasi variable harus langsung di inisialisasi jika tidak maka nilaiinya null
pemanggilan nilai variable dapat null namun memiliki nilai harus menggunakan ? untuk mengakses nilainya.

Sehingga pemanggilan hasilInputan saja bukan hasilInputan?

Sebenarnya semua code akan di kompilasi terlebih dahulu dari atas kebawah sehingga assigning variable dengan nilai null ke bukan null akan menjadi error. Maka dikonversi terlebih dahulu
 */