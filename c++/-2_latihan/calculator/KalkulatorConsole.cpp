#include <iostream>
using namespace std;

int main(){
    float nilaiA,nilaiB;
    char operasi;
    float hasil;

    //mendapatkan inputan dari user terlebih dahulu
    cout << "selamat datang di program kalkulator sederhana \n" << endl;

    cout << "Silahkan masukan angka pertama yang ingin dioperasikan: ";
    cin >> nilaiA;
    cout << "masukkan operasinya: ";
    cin >> operasi;
    cout << "Silahkan masukan angka kedua yang ingin di operasikan: ";
    cin >> nilaiB;

    //mengelola hasil inputan menjadi output yang diinginkan
    if(operasi == '+'){
        hasil = nilaiA + nilaiB;
    }else if(operasi == '-'){
        hasil = nilaiA - nilaiB;
    }else if(operasi == '/'){
        hasil = nilaiA / nilaiB;
    }else if(operasi == '*'){
        hasil = nilaiA * nilaiB;
    }else{
        cout << "Mohon untuk hanya memasukan operasi + - * /" << endl;
        //menginput ulang operasinya
    }

    cout << "Hasilnya adalah: " << endl;
    cout << hasil << endl;
}

/*
Disini kita memahami bahwa benar dalam prosesnya adalah input -> process -> output. Ini adalah paten dan banyak bahkan selalu menggunakan pola ini
Namun ada yang kita lewatkan, yaitu bagaimana jika inputnya sudah tidak benar?

Disini kita lupa belum tentu semua input itu benar maka harus ada rangkaian atau suatu cara agar hasil input atau data yang diinputkan pasti benar dan itu tantangannya
Ini sudah secara general digunakan pada bidang teknik baik elektro, otomotif dsb...
*/