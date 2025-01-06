#include <iostream>
#include <string>
using namespace std;

int main(){

    enum Hewan {ikan,sapi,kuda,burung};

    cout << "hasil tebakan benar akan menampilkan sisa hewan di enum" << endl << endl;
    Hewan hewan = sapi;

    switch(hewan){
        case ikan:
            cout << "ini adalah ikan kamu menebak diawal, menampilkan ikan" << endl;
        case sapi:
            cout << "ini adalah sapi kamu menebak dikedua, menampilkan sapi" << endl;
        case kuda:
            cout << "ini adalah kuda kamu menebak diketiga, menampilkan kuda" << endl;
        case burung:
            cout << "ini adalah burung kamu menebak diterakhir, menampilkan burung" << endl;
        default:
            cout << "semua hewan sudah habis" << endl;
    }
}

/*
Pada switch case kita tidak bisa memasukan eskpresi dengan object. Khususnya object string
*/