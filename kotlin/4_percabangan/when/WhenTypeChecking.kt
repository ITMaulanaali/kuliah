
fun main(){

    val nama = "lana"
    when(nama){
	    is String -> println("ini String")
	    !is String -> println("ini bukan String")
    }
}