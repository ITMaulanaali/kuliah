#include <iostream>
using namespace std;

enum warna {merah, kuning, hijau = 10, biru};

int main(){

    //membuat instance enum
	warna baju;

	baju = merah;   //maka hasilnya 0
    baju = kuning;  //maka hasilnya 1
	baju = hijau;   //maka hasilnya 10
	baju = biru;    //maka hasilnya 11

    cout << baju << endl;

	cin.get();
	return 0;
}

/*
enum bisa dibilang koleksi kata yang sebenarnya nilainya adalah index dan akan terus melanjutkan indexnya ditambah 1 secara urut pada nilai sebelumnya
sehingga jika hijau diberi index 10 maka biru akan melanjutkan indexnya menjadi 11

meskipun memberikan semua koleksi kata nilai index. Kita hanya bisa menggunakan satu kata berindex untuk digunakan;
*/