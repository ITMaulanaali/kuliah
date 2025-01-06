#include <iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    bool logikaOr_11 = a || a;
    bool logikaOr_10 = a || b;
    bool logikaOr_01 = b || a;
    bool logikaOr_00 = b || b;

    cout << "Hasil logika OR true-true adalah: " << logikaOr_11 << endl;
    cout << "Hasil logika OR true-false adalah: " << logikaOr_10 << endl;
    cout << "Hasil logika OR false-true adalah: " << logikaOr_01 << endl;
    cout << "Hasil logika OR false-false adalah: " << logikaOr_00 << endl;

    cin.get();
    return 0;
}