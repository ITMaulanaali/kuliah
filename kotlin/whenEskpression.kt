//mirip seperti switch case
//contoh:

val nilaiUjian = 'C'

when(nilaiUjian){
	'A' -> println("pintar")
	'B' -> println("lumayan")
	'C' -> println("okeLah")
	'D' -> println("jelek")
	else ->{
		println("maaf")
		println("kamu tidak lulus")
	}
}

-----------------------------------------------------------------
//cara penulisan lain dengan group option
when(nilaiUjian){
	'A','B','C' ->{
		println("lulus")
	}else->{
		println("maaf kamu ga lulus")
	}
}

-------------------------------------------------------------------
//when dengan in atau !in menggunakan array

val nilaiLulus: Array<String> = arrayOf('A','B','c')
when(nilaiUjian){
	in nilaiLulus -> println("lulus setelah cek semua isi di array ada nilai tersebut")
	!in nilaiLulus -> println("tidak lulus karena ga ada nilai ujian C di array nilai lulus")

}

-----------------------------------------------------------------------
//melakukan cek apakah type data itu sama
val nama = "lana"
when(nama){
	is String -> println("ini String")
	!is String -> println("ini bukan String")

}

----------------------------------------------------------------------------------
//Syntax baru seperti membuat ifExpression
val examValue = 90
when{
	examValue > 80 -> println("bagus")
	examValue > 60 -> println("lumayan")
	else -> println("bodoh")
}

