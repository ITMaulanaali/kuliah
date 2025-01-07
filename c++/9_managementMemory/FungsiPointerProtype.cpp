#include <iostream>
using namespace std;

//protype pointer
void printNilai(int *);
void luasPersegi(int *, int *);

int main(){

    int a = 5;
    int b = 5;

    cout << "Nilai a default a=5 menjadi: " << a << endl;

    printNilai(&a);
    luasPersegi(&a,&b);

    cout << "Nilai setelah dirubah dari refrence fungsi: " << a << endl;

    cin.get();
    return 0;
}

void printNilai(int *nilaiAPtr){

    cout << "Nilai argument pointer awal: " << *nilaiAPtr << " alamatnya: " << *nilaiAPtr << endl;

    //merubah nilai argument yang didapat pointer ikut terganti pada nilai di referencenya
    *nilaiAPtr = 10;
}

void luasPersegi(int *panjangAPtr, int *tinggiAPtr){

    int hasil = (*panjangAPtr) * (*tinggiAPtr);
    cout << "Hasil luasnya adalah: " << hasil << endl;
}