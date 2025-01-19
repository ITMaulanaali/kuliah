
fun main(){

    //membuat array dengan tipe data String
    val array: Array<String> = arrayOf("nilai1 Tidak Boleh Null","nilai2 Tidak Boleh Null")
    for(i in array){
        println(i)
    }

    //membuat array yang boleh null
    val arrayBolehNull: Array<String?> = arrayOfNulls(5)
    arrayBolehNull[0] = "nilai1"
    arrayBolehNull[1] = "nilai2"
    arrayBolehNull[2] = "nilai3"
    arrayBolehNull[3] = "nilai4"
    arrayBolehNull[4] = "nilai5"
    for(i in arrayBolehNull){
        println(i)
    }

}
