
fun main(){

    val names = arrayOf("hai","saya","lana")

    for(name in names){
    	print("$name ,")
    }

    println()
    for(i in 0..10){
    	print("$i ,")
    }

    // println()
    // for(i in 100..0 step 10){
    // 	print("$i ,")
    // }

    println()
    for(i in 20 downTo 0){
        print("$i ,")
    }
}

/*
rentang default range adalah dari terkecil ke terbesar
*/