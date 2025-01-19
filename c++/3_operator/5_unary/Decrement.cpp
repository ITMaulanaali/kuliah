#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int hasil;

    hasil = a--;
    cout << "Hasil variable a=5 decrement a--, simpan ke hasil: " << hasil << " nilai a: " << a << endl;

    a = 5;
    hasil = --a;
    cout << "Hasil variable a=5 decrement --a, simpan ke hasil: " << hasil << " nilai a: " << a << endl;

    cin.get();
    return 0;
}

/*
Pada operator decrement setiap kali a-- dieksekusi itu sama saja dengan mengurangi satu -1 nilai di variabel a
terdapat 2 cara yaitu:
a-- post-increment
--a pre-decrement
*/