#include <iostream>
using namespace std;

int main(){

    bool t = true;
    bool f = false;

    cout << "boolean " << sizeof(t) << "Byte" << endl;
    cout << "Nilai: " << t << endl;
    cout << "Nilai: " << f << endl;
    
    cin.get();
    return 0;
}

/*
type data boolean hanya memiliki nilai true dan false. Biasanya dipakai sebagai perbandingan untuk operator logika
Nilai true akan diinisialisasi sebagai nilai 1
Nilai false akan diinisialisasi sebagai nilai 0

bool 1Byte
*/