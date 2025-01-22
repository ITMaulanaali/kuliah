#include <iostream>
using namespace std;

int penjumlahan(int a, int b){
    return a+b;
}

int main(){

    auto a = 2;
    auto b = 2.5;
    auto c = 'L';
    auto d = true;
    auto e = "Halo";

    //auto yang dapat digunakan untuk menyimpan lambda expression atau disebut lambda function
    auto f = [](int a, int b){return a+b;};
    //atau type data yang dapat menyimpan type alamat fungsi
    auto g = penjumlahan;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f(5,5) << endl;
    cout << g(5,6) << endl;

    cin.get();
    return 0;
}

/*
type data auto dapat digunakan untuk semua type data fundamental selain itu juga
biasa digunakan untuk menyimpan lambda.

Alasan karena biasa digunakan dengan lambda adalah karena typde data auto juga mendukung untuk menyimpan alamat fungsi dimana lambda juga merupakan anonymous function
*/