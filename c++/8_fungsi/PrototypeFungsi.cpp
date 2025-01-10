#include <iostream>
using namespace std;

//prototype fungsi. Fungsi sebenarnya ada dibawah
void penjumlahan(int, int);
void namaKu();

int main(){

    penjumlahan(5,5);
    namaKu();

    cin.get();
    return 0;
}

//fungsi dengan parameter
void penjumlahan(int nilaiA, int nilaiB){
    int hasil = nilaiA + nilaiB;
    cout << "penjumlahan dari keduanya adalah: " << hasil << endl;
}

//fungsi tanpa parameter
void namaKu(){
    cout << "Namaku adalah orang" << endl;
}

/*
Pada pemrograman c++ itu sangat mementingkan control flow yang terstruktur dan memory. Oleh karenanya program akan dijalankan dari atas ke bawah
Fungsi yang dipanggil namun berada di bawah tidak akan bisa dieksekusi kecuali menggunakan protoytpe function
*/