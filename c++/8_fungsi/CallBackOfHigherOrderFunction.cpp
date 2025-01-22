#include <iostream>
using namespace std;

void penjumlahan(int a){
    cout << "ini cout fungsi void dari a: " << a << endl;
}

int perkalian(int a, int b){
    return a*b;
}


void denganParameterFungsi(void (*ptrFungsi)(int), int a, int b){
    ptrFungsi(a);
    cout << "dan ini adalah nilai dari parameter b: " << b << endl;
}
void denganParameterFungsi(int (*ptrFungsi)(int, int), int a, int b){
    int hasil = a+b;
    cout << "Contoh disebut callback ketika fungsi utama telah melakukan proses atau sedang proses kemudian memanggil kembali fungsi selanjutnya: " << ptrFungsi(hasil,b) << endl;
    cout << ptrFungsi(ptrFungsi(hasil,b),a);
}

int main(){

    denganParameterFungsi(penjumlahan, 5,3);
    cout << endl;
    denganParameterFungsi(perkalian, 5,3);

    cin.get();
    return 0;
}

/*
higher order function sama dengan callback. Yang membedakan lebih umum yaitu memiliki parameter fungsi yang referencing dan dapat direturn atau dipanggil seperti bisa
sedangkan callback adalah pemanggilan kembali sebuah fungsi dari parameter untuk mengolah proses dari fungsi utama
*/