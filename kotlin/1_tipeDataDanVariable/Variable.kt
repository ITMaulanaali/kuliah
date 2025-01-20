const val harusGlobal: String = "Ini variable global"

fun main() {

    val imutable: Int? = 10
    var mutable: Int = 11
    mutable = 12

    val variableTypeDataOtomatis = 20.5
    val variableDapatNull: Int? = null

    //mengkonversi dari variable null ke not null dengan !!
    val variableNotNullAssertion: Int = imutable!!

    println("NIlai imutable:      $imutable")
    println("NIlai mutable:       $mutable")
    println("NIlai variableNull:  $variableDapatNull")
    println("NIlai variableNull:  $variableTypeDataOtomatis")
    println("Nilai konversi variable Null ke tidak Null dari variable imutable ${variableNotNullAssertion}")
    println(harusGlobal)
}

/*
terdapat 2 jenis variable:
- imutable(kekal): val
    mirip seperti const di c++ nilainya tidak dapat dirubah

- mutable(dapat berubah): var
    variable yang seperti biasanya dapat menyimpan nilai secara dinamis

Variable akan secara otomatis mengembalikan nullException jika ada kesalahan antara variable yang dapat null dengan yang tidak dapat null
Olehh karena itu bisa melakukan perubahan variable dengan Not Null

Direkomendasikan untuk selalu membuat variable dengan val
 */