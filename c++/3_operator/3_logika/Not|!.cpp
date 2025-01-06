#include <iostream>
using namespace std;

int main(){

    bool a = true;
    bool b = false;

    bool logikaOr_11 = !a;
    bool logikaOr_10 = !b;

    cout << "Hasil logika NOT true adalah: " << logikaOr_11 << endl;
    cout << "Hasil logika NOT false adalah: " << logikaOr_10 << endl;

    cin.get();
    return 0;
}