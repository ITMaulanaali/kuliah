#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    a = (b=5,c=2,b+c);

    cout << a << endl;

    cin.get();
    return 0;
}

/*
Comma operator dapat mempersingkat dan mengecilkan code program
contohnya ketika ingin mengassign nilai penjumlahan b+c ke a
*/