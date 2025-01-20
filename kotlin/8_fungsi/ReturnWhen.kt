
fun main(){

    val nilai: Char = 'C'
    println("apakah lulus? ${nilaiUjian(nilai)}")
}

fun nilaiUjian(nilai: Char): String{
    return when(nilai){
        'A','B','C' -> {
            "lulus"
        }else -> {
            "tidak lulus"
        }
    }
}