
fun main() {

    val imutable: Int = 10
    var mutable: Int = 11
    mutable = 12

    val variableTypeDataOtomatis = 20.5
    val variableDapatNull: Int? = null

    println("NIlai imutable:      $imutable")
    println("NIlai mutable:       $mutable")
    println("NIlai variableNull:  $variableDapatNull")
    println("NIlai variableNull:  $variableTypeDataOtomatis")
}

/*
terdapat 2 jenis variable:
- imutable(kekal): val
    mirip seperti const di c++ nilainya tidak dapat dirubah

- mutable(dapat berubah): var
    variable yang seperti biasanya dapat menyimpan nilai secara dinamis

Direkomendasikan untuk selalu membuat variable dengan val
 */