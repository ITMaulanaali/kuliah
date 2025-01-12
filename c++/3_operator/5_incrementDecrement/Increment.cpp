#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int hasil;

    hasil = a++;
    cout << "Hasil variable a=5 decrement a++, simpan ke hasil: " << hasil << " nilai a: " << a << endl;

    a = 5;
    hasil = ++a;
    cout << "Hasil variable a=5 decrement ++a, simpan ke hasil: " << hasil << " nilai a: " << a << endl;

    cin.get();
    return 0;
}

/*
Pada operator increment setiap kali a++ dieksekusi itu sama saja dengan menambah satu +1 nilai di variabel a
Terdapat 2 cara yaitu:
a++ post-increment
++a pre-increment
*/