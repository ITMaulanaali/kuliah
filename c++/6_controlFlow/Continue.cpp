#include <iostream>
using namespace std;

int main(){

    int a = 5;

    while(a < 20){
        a++;
        if(a==15){
            continue;
        }
        cout << a << endl;
    }
}

/*
Continue digunakan untuk menskip looping yang terjadi kemudian kembali ke iterasi pertama sehingga statement dibawahnya akan terskip.
Continue hanya mempengaruhi blok ditempat continue itu dipanggil.
*/