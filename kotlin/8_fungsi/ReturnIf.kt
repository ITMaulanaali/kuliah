
fun main(){

    val nama: String = "lana"
    println("apakah ada namanya? ${cekNama(nama)}")
}

fun cekNama(nama: String): Boolean{
    return if(nama == "lana"){
        true
    }else{
        false
    }
}