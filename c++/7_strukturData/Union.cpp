#include <iostream>
using namespace std;

union satuBlokMemory{
    char nama;
    int umur;
    bool lulus;
};

int main(){

    //membuat instance union
    satuBlokMemory dataUnion;
    
    dataUnion.nama = 'a';
    // dataUnion.umur = 10;
    // dataUnion.lulus = true;

    cout << dataUnion.nama << endl;
    cout << dataUnion.umur << endl;
    cout << dataUnion.lulus << endl;

    cin.get();
    return 0;
}

/*
Union yaitu penyatuan atau perpaduan. Sederhananya, semua variable dengan type data berbeda di dalam union akan menggunakan satu blok memory yang sama sehingga bit yang digunakan juga sama.
Setiap perubahan data di satu variable juga akan merubah bit data di variable lain. Sehingga semua nilai akan berubah deseuaikan dengan bitnya
*/