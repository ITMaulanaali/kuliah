 
 fun main(){
    val b: Byte = 10
    val s: Short = 11
    val i: Int = 12
    val l: Long = 13
    
    println("Byte   b bernilai:   $b dengan range:  ${Byte.SIZE_BYTES}  Byte")
    println("Short  s bernilai:   $s dengan range:  ${Short.SIZE_BYTES} Byte")
    println("Int    i bernilai:   $i dengan range:  ${Int.SIZE_BYTES}   Byte")
    println("long   l bernilai:   $l dengan range:  ${Long.SIZE_BYTES}  Byte")
}

/*
 * Byte ->  1Byte
 * Short -> 2Byte
 * Int ->   4Byte
 * Long ->  8Byte
 */