#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int iterasi;

    do{
        a++;
        iterasi++;
        cout << "Iterasi sebanyak: " << iterasi << " nilai a= " << a << endl;
    }while(a<=10);

    cin.get();
    return 0;
}

/*
Pada DoWhile itu diberikan suatu nilai boolean true atau false yang bisa didapat dari mana saja tidak terkecuali seperti contoh diatas adalah hasil boolean dari komparasi
Namun yang umum biasa disebut adalah syarat

DoWhile akan mengeksekusi setidaknya satu kali kemudian baru mengecek syaratnya apakah masih terpenuhi untuk dilakukan looping kembali.
*/