#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int fn;
    int fn_1 = 1;
    int fn_2 = 0;

    for(int i=1; i<=n; i++){

        fn = fn_1 + fn_2;
        fn_2 = (fn_1);
        fn_1 = (fn);
        cout << fn_2 << endl;
    }

    cout << fn << endl;
    
    cin.get();
    return 0;
}

/*
Jika ingin menerapkan operasi rumus matematika ke pemrograman, pastikan untuk memperhatikan urutan dari atas kebawah dan dari kiri kekanan sebuah program
Untuk memulai program jelas sekali harus memasukan input(variable), inputan apa saja atau material apa saja yang dibutuhkan untuk fibonaci.
baru kemudian setelah mendapat proses dan hasil, kita bisa memperpendek atau efisiensi penulisan variable hingga proses pembuatan fibonaci.

Kita tidak bisa membuat / oprek rumus fibonaci jika kita tidak tahu batas bawah dan atas. Sehingga program diatas membuat polanya sendiri dengan memberi nilai pasti di batas paling bawah sesuai dengan sifat fibonaci yaitu menjumlahkan nilai sebelumnya
*/