#include <iostream>
#include <string>
using namespace std;

//fungsi dengan parameter mengembalikan nilai hasil ke variable penjumlahan dengan type data int
int penjumlahan(int nilaiA, int nilaiB){
    int hasil = nilaiA + nilaiB;
    return hasil;
}

//fungsi tanpa parameter mengembalikan nilai "Namaku adalah orang" di nama fungsi namaKu
string namaKu(){
    string nama = "Namaku adalah tetap orang";
    return nama;
}

int main(){

    cout << "Hasil jumlahnya adalah: " << penjumlahan(5,5) << endl;

    string nama = namaKu();
    cout << nama << endl;

    cin.get();
    return 0;
}

/*
Pada pemrograman c++ itu sangat mementingkan control flow yang terstruktur dan memory. Oleh karenanya program akan dijalankan dari atas ke bawah
Fungsi yang dipanggil namun berada di bawah tidak akan bisa dieksekusi kecuali menggunakan protoytpe function
sebuh fungsi dengan kembalian di c++ didefinisikan dengan diberi type data apa yang akan di return
*/