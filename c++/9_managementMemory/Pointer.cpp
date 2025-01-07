#include <iostream>
using namespace std;

int main(){

    int a = 5;

    //mengreferencing nilai a ke *aPtr
    //dan mengreferencing alamat dari a ke aPtr
    int *aPtr = nullptr;
    aPtr = &a;

    cout << a << "\t" << &a << endl;
    cout << aPtr << "\t" << *aPtr << endl;

    cin.get();
    return 0;
}

/*
#Reference
a   = berisi nilai
&a  = berisi alamat memory

aPtr    = berisi alamat memory
*Ptr    = berisi nilai
*/