#include <iostream>
#include <bitset>
using namespace std;

int main(){

    int a = 6;

    //geser ke kiri satu
    int hasil = a << 1;

    cout << "A = " << a << endl << endl;

    cout << bitset<8>(a) << endl;
    cout << bitset<8>(hasil) << endl << endl;

    cout << "shifleft(<<) ke kiri satu dari bit variablenya adalah: " << bitset<8>(hasil) << endl;
    cout << "Hasil bitwise << nilai bitnya jika dikonversi ke int adalah: " << hasil << endl;

    cin.get();
    return 0;
}