#include <iostream>
#include <string>
using namespace std;

int main(){

    int inputUser;

    cout << "Masukan start urutan dari 5-9" << endl << endl;
    cin >> inputUser;

    switch(inputUser){
        case 5:
            cout << "berurut dari 5" << endl;
        case 6:
            cout << "berurut dari 6" << endl;
        case 7:
            cout << "berurut dari 7" << endl;
        case 8:
            cout << "berurut dari 8" << endl;
        case 9:
            cout << "berurut dari 9" << endl;
            break;
        default:
            cout << "anda tidak mengurutkan sesuai range yang ada" << endl;
    }
}

/*
Pada switch case kita tidak bisa memasukan eskpresi dengan object. Khususnya object string
*/