
fun main(){

    print("Silahkan masukan nilai ujian anda A,B,C,D,E: ")
    val inputUser: Char = readLine()?.firstOrNull()!!

    when(inputUser){
	    'A' -> println("pintar")
	    'B' -> println("lumayan")
	    'C' -> println("okeLah")
	    'D' -> println("jelek")
	    else ->{
		    println("maaf")
		    println("kamu tidak lulus")
	    }
    }
}