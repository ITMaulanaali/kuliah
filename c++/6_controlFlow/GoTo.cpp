#include <iostream>
using namespace std;

int main(){

    int a = 5;
    label_GOTO:

    a++;
    cout << a << endl;

    goto label_GOTO;
}

/*
goto sebenarnya cukup powerfull karena kita bisa dengan leluasa mengarahkan flow program kita mengarah sendiri.
Namun ini disarankan untuk tidak digunakan karena akan menyulitkan dalam mendeteksi alur program karena benar benar fleksibel dan tidak sesuai aturan standar untuk flow
seperti contoh diatas ini akan melooping tanpa henti jika kita salah meletakan goto
*/