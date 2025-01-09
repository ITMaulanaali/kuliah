#include <iostream>
using namespace std;

//kelemahan dari rekursif ini adalah 2 rekursif dipanggil 2 kali akan terus terduplikat setiap pemanggilan satu fibonacci lagi. Jadi tidak efisien(menghabiskan resourc dan load)
int fibonacci(int banyakNilai){

    if(banyakNilai == 1|| banyakNilai ==0){
        return banyakNilai;
    }else{
        return fibonacci(banyakNilai-1) + fibonacci(banyakNilai-2);
    }
}

int main(){

    cout << fibonacci(8) << endl;

}

/*
Banyak pola itu benar benar berhasil dan bisa di implementasikan seperti menambahkan nilai sebelumnya atau tidak pada fibonacci
kita bisa terus mencoba pola pola yang ada. Mencari pola mana yang paling efisien dalam membuat fibonacci dan pola mana yang sesuai untuk dapat diimplementasikan dengan standar penulisan pemrograman

pada program diatas kita membuat pola dimana nilai fibonacci 8 adalah hasil dari (8-1) + (8-2)
                                                                                 (7)   + (6) = 13
Ini sesuai dengan fibonacci 1 adalah hasil dari (2-1) + (2 - 2)
                                                (1)   + (0) = 1;
Dengan pola yang dapat dinalar yaitu bertambah hingga banyak nilai bernilai 1 || 0
*/