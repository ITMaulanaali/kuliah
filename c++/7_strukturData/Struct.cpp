#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
	string nama;
	int nim;
	bool lulus;
};

int main(){

    //membuat instance struct
	mahasiswa maulana;

	maulana.nama = "Achmad Maulana Ali Hamzah";
	maulana.nim = 412;
	maulana.lulus = true;

    cout << maulana.nama << endl;
    cout << maulana.nim << endl;
    cout << maulana.lulus << endl;

    cin.get();
    return 0;
}

/*
Struct merupakan tipe data komposit yang digunakan untuk menyimpan berbagai type data variable
hampir mirip dengan class bedanya di class juga dapat menyimpan berbagai fungsi
*/