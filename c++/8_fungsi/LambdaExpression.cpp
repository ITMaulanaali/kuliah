#include <iostream>
using namespace std;

int main(){
    
    int a = 5;
    int b = 2;

    auto penjumlahan = [a,b](){int c = a+b; cout << a << " ditambah " << b << " adalah: " << c << endl; return c;};
    cout << penjumlahan() << endl;

    cout << endl;

    auto perkalian = [](int &parameterA, int &parameterB){int c = parameterA*parameterB; cout << parameterA << " dikalli " << parameterB << " adalah: " << c << endl; return c;};
    cout << perkalian(a,b) << endl;

    cin.get();
    return 0;
}

/**
 * [] argument yang dapat diinputkan nilai/variable yang masih pada scope
 * () parameter yang dapat dibuat untuk menginput argument ketika mengeksekusi atau memanggil lambda
 * {} body yang berisi statement
 */