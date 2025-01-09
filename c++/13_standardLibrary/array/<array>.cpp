#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int,5> namaArray = {10,20,30,40,50};
    namaArray[0] = 100;

    cout << namaArray[0] << endl;
    cout << namaArray[1] << endl;
    cout << namaArray[2] << endl;
    cout << namaArray[3] << endl;
    cout << namaArray[4] << endl;

    cout << endl;

    cout << "range array: " << namaArray.size() << endl;
    cout << "alamat index awal: " << namaArray.begin() << endl;
    cout << "alamat index akhir: " << namaArray.end() << endl;
    cout << "nilai pada index 0: " << namaArray.at(0) << endl;

    cin.get();
    return 0;
}