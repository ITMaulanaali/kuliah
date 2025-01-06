#include <iostream>
using namespace std;

int main(){

    short s = 10;
    int i = 11;
    long l = 12;

    cout << "short " << sizeof(s) << "Byte" << " Nilai: " << s << endl;
    cout << "int " << sizeof(i) << "Byte" << " Nilai: " << i << endl;
    cout << "long " << sizeof(l) << "Byte" << " Nilai: " << l << endl;
    cin.get();
    return 0;
}

/*
terdapat 3 tipe data untuk bilangan bulat yaitu
short   2Byte
int     4Byte
long    8Byte
*/