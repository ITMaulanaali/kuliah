#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int b = 4;
    int hasil = a - b;

    cout << "Hasil pengurangan positifnya adalah: " << hasil << endl;
    hasil = b - a;
    cout << "Hasil pengurangan negatifnya adalah: " << hasil << endl;

    cin.get();
    return 0;
}

/*
jika ingin agar nilai hasil tidak akan bisa menghasilkan nilai negatif maka tambahkan unsigned sehigga akan error bahwa tidak boleh ada nilai negatif
*/