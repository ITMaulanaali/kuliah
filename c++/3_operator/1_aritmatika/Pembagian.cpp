#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 3;
    int hasil = a / b;

    cout << "Hasil pembagian bulatnya adalah: " << hasil << endl;

    int c = 5;
    double d = 3;
    float hasil2 = c / d;

    cout << "Hasil pembagian pecahannya adalah: " << hasil2 << endl;

    cin.get();
    return 0;
}

/*
nilai int akan selalu bulat sehingga 3/5 akan menghasilkan nilai bulat = 0
untuk mendapatkan hasil pembagian akurat dengan nilai koma tipe data harus bertipe decimal atau float dan double
dan minimal salah satu variable operasi harus bertipe bilangan decimal juga
*/