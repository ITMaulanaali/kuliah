#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printArray(array<int,5> &array){
    for(int i=0; i<=4; i++){
        cout << array[i] << " ";
    }

    cout << endl;
}

int main(){
    array<int, 5> array1Dimensi = {30,20,60,10,70};

    printArray(array1Dimensi);
    sort(array1Dimensi.begin(), array1Dimensi.end());
    printArray(array1Dimensi);

    int angkaCari = 30;
    bool hasilCari = binary_search(array1Dimensi.begin(), array1Dimensi.end(), angkaCari);
    int hasil = (hasilCari == true) ? (angkaCari) : (71045404); //tidak ada

    cout << "angka: " << hasil << " Di array" << endl;

    cin.get();
    return 0;
}

/*
Pada array manual adalah const kumpulan kita tidak bisa memasukan range dari array ke argument(hanya bisa reference alamat array nya saja)
dan syntax reference dari array diatas. Serta library yang mendukung manipulation array seperti sort menggunakan reference std library array
*/