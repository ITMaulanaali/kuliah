#include <iostream>
using namespace std;

int main(){

    float a = 3.7;
    float b = 2.5;

    int hasil = int(a+b);

    cout << "Hasil casting ke int adalah: " << hasil << endl;

    cin.get();
    return 0;
}

/*
c++ tidak mendukung casting otomatis seperti java,kotlin,javascript.
semua operasi yang akan merubah nilai ke type data tertentu harus disesuaikan dengan casting manual
*/
