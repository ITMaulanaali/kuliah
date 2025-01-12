#include <iostream>
#include <bitset>
using namespace std;

int main(){

    int a = 3;
    int b = 6;

    int hasil = a & b;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl << endl;

    cout << bitset<8>(a) << endl;
    cout << bitset<8>(b) << endl;
    cout << bitset<8>(hasil) << endl << endl;

    cout << "perbandingan and(&) dari kedua bit variablenya adalah: " << bitset<8>(hasil) << endl;
    cout << "Hasil bitwise & nilai bitnya jika dikonversi ke int adalah: " << hasil << endl;
/**/
    cin.get();
    return 0;
}