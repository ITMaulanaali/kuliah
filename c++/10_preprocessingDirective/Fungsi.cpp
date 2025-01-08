#include <iostream>
using namespace std;

#define luasPersegi(sisi) (sisi*sisi)

int main(){

    cout << luasPersegi(5) << endl;

    cin.get();
    return 0;
}

/*
Macro Fungsi digunakan untuk menggantikan cara membuat fungsi tanpa menampung nilai
Sehingga tidak ada alokasi memory yang digunakan
*/