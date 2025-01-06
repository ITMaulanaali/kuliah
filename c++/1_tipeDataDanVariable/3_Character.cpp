#include <iostream>
using namespace std;

int main(){

    char c = 'L';

    cout << "char " << sizeof(c) << "Byte" << " Nilai: " << c << endl;
    cin.get();
    return 0;
}

/*
variable dengan type data karakter hanya memiliki atau memuat satu huruf abjad yang berbentuk kode ASCII(karena 0-256)
karena type data char hanya bisa memuat 1Byte maka abjad seperti abjad arab tidak dapat dimasukan karena mengandung lebih dari 1Byte

char 1Byte
*/