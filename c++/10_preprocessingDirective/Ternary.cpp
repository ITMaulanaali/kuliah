#include <iostream>
using namespace std;

#define PERSAMAAN(A,B) ((A == B) ? "a dan b sama" : "a dan b beda")

int main(){

    cout << PERSAMAAN("Hai","Halo") << endl;

    cin.get();
    return 0;
}

/*
Macro define ternary digunakan untuk mengganti ifelse sederhana dan tanpa menyimpan nilai dimemory
Sehingga tidak ada alokasi memory yang digunakan
*/