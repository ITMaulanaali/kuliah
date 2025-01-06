#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int loop;

    while(a < 10){
        a += 1;
        loop += 1;
        cout << "nilai a: " << a << endl;
        cout << "Looping sebanyak" << loop << endl;
    }

    cin.get();
    return 0;
}

/*
Pada while itu diberikan suatu nilai boolean true atau false yang bisa didapat dari mana saja tidak terkecuali seperti contoh diatas adalah hasil boolean dari komparasi
Namun yang umum biasa disebut adalah syarat. Ketika syarat terpenuhi maka akan dilakukan aksi(blok kode didalam while yang akan di iterasi)

*/