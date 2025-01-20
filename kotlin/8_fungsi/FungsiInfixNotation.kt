
fun main(){

    val hasil = "lana" to "up"
    println(hasil)
}

infix fun String.to(type: String): String{

    if(type == "up"){
        return this.uppercase()
    }else{
        return this.lowercase()
    }
}

/*
membuat sebuah type data memiliki fungsi(ExtensionFunction) dengan pemanggilan seperti menggunakan in
 */