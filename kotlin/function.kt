//syntax dasar penulisan function tanpa parameter atau method
fun helloWorld(){
	println("Selamat halo")
}

//Syntax dasar function atau method dengan parameter
fun hallo(nama: String){

	println("hallo temanku $nama")
}

//Syntax dasar funtion dengan default argument
fun hallo(nama: String? = null){

	if(nama = null){
		println("Hallo tuanku")
	}else{
		println("Hallo tuanku $nama")
	}
}

//mengisi argument dengan acak sesuai nama argument(Named Argument)

//unit returning function
//by default jika tidak diberikan return, return defaultnya adalah unit

//Function return type
fun hasilSum(a: Int, b: Int): Int{
	val total: Int = a + b
	return total;
}

-----------------------------------------------------------------------
//single Eskpression function
//membuat function hanya dalam satu baris program yang memiliki return
fun double(a: Int): Int = a*2

//membuat function yang tidak mengmbalikan data dalam satu baris code saja
fun hi(nama: String): Unit = println("Hi $nama")

-----------------------------------------------------------------------
//Function vararg parameter
//function yang variable akhirnya bisa menjadi array
fun hitungTotal(nama: String, vararg nomer: Int){
	ikan = "number"
	for(number in nomer){
		ikan = number;
	println("nama saya $ikan")
	}
}

--------------------------------------------------------------------------------
//Extension Function
//menambahkan function pada tipe data yang sudah ada
//ini adalah hal baru di bahasa pemrograman

---------------------------------------------------------------------------------------
//Infix Notation
//ini adalah hal baru di bahasa pemrograman

---------------------------------------------------------------------------------------------
//return if
fun sayHello(nama: String = ""): String{
	return if(nama == ""){
		"Hello Bro"
	}else{
		"Hello $nama"
	}
}

//return when
fun syaHello(nama: String = ""): String{
	return when(nama){
		"" -> "Hello Bro"
		else ->"salah"
	}
}

-------------------------------------------------------------------------
//Recursive Function
fun factorialLoop(value: Int): Int{
	return when(value){
		1-> 1
		else -> value * factorialRecursive(value-1)
	}
}

----------------------------------------------------------------------------------------------
//Tail Recursive
//agar tidak terjadi stack overflow maka menggunakan Tail Recursive
//Tail Recursive ini sebenarnya akan dirubah ke looping Biasa. Ini cuma akal akalan saja agar kita bisa membuat looping secara mudah dengan syntax recursive padahal sebenarnya ini akan di rubah ke looping biasa
tailrec fun factorialLoop(value: Int, total: Int): Int{
	return when(value){
		1 -> total
		else -> factorialRecursive(value-1, total*value)
	}
}

--------------------------------------------------------------------
//Lambda Eskpression
//adalah fucntion yang tidak memiliki nama
val lambdaName: (String) -> String = {value: String ->
	value.toUpperCase()
}

-----------------------------------------------------------------------------------------------
//Higher-Order Function
//sebuah fungsi bisa memiliki parameter function khususnya parameter yang inputnya lambda
//parameter lambda harus dipaling akhir parameter kalau ingin dijadikan trailing lambda
fun hello(value: String, transformer: (String) -> String): String{
	return "Hello ${transformer(value)}";
}

----------------------------------------------------------------------------------------
//Anonymous Function

