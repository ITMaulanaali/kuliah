fun main() {
    
    var a: Int = 5
    var hasil: Int? = null
    
    hasil = a--
    println("Hasil variable a=5 di decrement a-- adalah: $hasil")
    a = 5
    hasil = --a
    println("Hasil variable a=5 di decrement --a adalah: $hasil")
}