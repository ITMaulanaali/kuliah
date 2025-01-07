#include <iostream>
using namespace std;

int luasPersegi(int panjang, int lebar){
	int luas = panjang * lebar;
    return luas;
}

void luasPersegi(int sisi){
	int luas = sisi * sisi;
	cout << "Hasil luasnya void adalah: " << luas << endl;
}

double luasPersegi(double sisi){
	return sisi * sisi;
}

int main(){

    cout << luasPersegi(5,5) << endl;
    luasPersegi(5);
    cout << luasPersegi(2.5) << endl;

    cin.get();
    return 0;
}

/*
Overloading bisa dikatakan menimpa nama fungsi yang sama pada satu file atau class dengan berbagai parameter type yang berbeda baik jumlah atau jenisnya
Namun overloading tidak dapat menimpa fungsi yang memiliki nama dan parameter yang sama.
pemanggilan luasPersegi(5) akan error jika misalnya menambahkan default argument di parameter int lebar. Karena akan dideteksi ada dua overloading yang sama yang digunakan
*/