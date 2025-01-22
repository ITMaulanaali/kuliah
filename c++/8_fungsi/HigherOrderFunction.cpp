#include <iostream>
using namespace std;

void penjumlahan(int a){
    cout << "ini cout fungsi void dari a: " << a << endl;
}

int perkalian(int a, int b){
    return a*b;
}

//Higher-order function yang di overloading biar lebih mudah aja
void denganParameterFungsi(void (*ptrFungsi)(int), int a, int b){
    ptrFungsi(a);
    cout << "diatas adalah hasil referensi dari parameter fungsi Penjumlahan" << endl;
    cout << "dan ini adalah nilai dari parameter b: " << b << endl;
}
void denganParameterFungsi(int (*ptrFungsi)(int, int), int a, int b){
    cout << "ini adalah nilai hasil perkalian dari parameter referensi fungsi a dengan b: " << ptrFungsi(a,b) << endl;
}

int main(){

    denganParameterFungsi(penjumlahan, 5,3);
    cout << endl;
    denganParameterFungsi(perkalian, 5,3);

    cin.get();
    return 0;
}

/*
Higher-order function adalah fungsi yang memiliki parameter yang bisa diinputkan fungsi/reference fungsi lainnya.
Jika parameter memanggil fungsi bukan referencing atau bahkan menjalankan fungsi lain di dalam body fungsi itu tidak termasuk higher-order function
*/