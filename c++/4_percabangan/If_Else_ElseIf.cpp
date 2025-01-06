#include <iostream>
#include <string>
using namespace std;

int main(){

    string hewan;
    
    cout << "Masukkan nama hewannya" << endl;
    cin >> hewan;

    if(hewan == "sapi"){
        cout << "benar sekali hewannya sapi" << endl;
    }else if(hewan == "ikan"){
        cout << "benar sekali hewannya ikan" << endl;
    }else{
        cout << "maaf kamu salah menebak" << endl;
    }

    cin.get();
    return 0;
}

/*
pada percabangan didalam if selalu berisi operator komparasi yang akan menghasilkan true atau false yang mana ini disebut kondisi
*/