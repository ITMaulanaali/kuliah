#include <iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    bool logikaAnd_11 = a && a;
    bool logikaAnd_10 = a && b;
    bool logikaAnd_01 = b && a;
    bool logikaAnd_00 = b && b;

    cout << "Hasil logika AND true-true adalah: " << logikaAnd_11 << endl;
    cout << "Hasil logika AND true-false adalah: " << logikaAnd_10 << endl;
    cout << "Hasil logika AND false-true adalah: " << logikaAnd_01 << endl;
    cout << "Hasil logika AND false-false adalah: " << logikaAnd_00 << endl;

    cin.get();
    return 0;
}