#include <iostream>
#include <string>
using namespace std;

int main(){

    int inputUser;
    
    cout << "Masukkan umurmu dari 5-18 tahun" << endl;
    cin >> inputUser;

    if(inputUser >= 5 && inputUser < 10){
        cout << "Anda adalah anak kecil" << endl;
    }else if(inputUser >= 10 && inputUser <= 18){
        cout << "Anda adalah remaja" << endl;
    }else{
        cout << "Anda tidak memasukan range tahun dengan benar" << endl;
    }

    cin.get();
    return 0;
}

/*
pada percabangan didalam if selalu berisi operator komparasi yang akan menghasilkan true atau false yang mana ini disebut kondisi
*/