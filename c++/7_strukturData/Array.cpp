#include <iostream>
using namespace std;

int main(){

    int arraySatuDimensi[] = {10,20,30};
    
    cout << "index[0] adalah: " << arraySatuDimensi[0] << endl;
    cout << "index[1] adalah: " << arraySatuDimensi[1] << endl;
    cout << "index[2] adalah: " << arraySatuDimensi[2] << endl;
    

    int arrayDuaDimensi[2][2] = { {10, 20}, {30, 40} };

    cout << "index baris[0]kolom[0] adalah: " << arrayDuaDimensi[0][0] << endl;
    cout << "index baris[0]kolom[1] adalah: " << arrayDuaDimensi[0][1] << endl;
    cout << "index baris[1]kolom[0] adalah: " << arrayDuaDimensi[1][0] << endl;
    cout << "index baris[1]kolom[1] adalah: " << arrayDuaDimensi[1][1] << endl;

    cin.get();
    return 0;
}

/*
Terdapat banyak dimensi array tidak terbatas. Namun yang umum digunakan adalah satu dimensi[] dan dua dimensi[][]
pada array dua dimensi[][] data disimpan secara struktur berdasarkan baris dan kolom.

kurung kotak pertama menandakan baris.
kurung kota kedua mendandakan kolom.

kurung kotak tidak diinisialisasi berdasarkan index namun berisi berapa banyak elemen atau nilai yang bisa ditampung pada array(ada 2 element di baris dan 2 element di kolom)
*/