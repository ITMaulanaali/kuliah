#include <iostream>
#include <bitset>
using namespace std;

int main(){

    int b = 200;

    int hasil =  ~b;

    cout << "B = " << b << endl << endl;

    cout << bitset<8>(b) << endl;
    cout << bitset<8>(hasil) << endl << endl;

    cout << "Hasil bitwise ~ nilai bitnya jika dikonversi ke int adalah: " << hasil << endl;

    cin.get();
    return 0;
}