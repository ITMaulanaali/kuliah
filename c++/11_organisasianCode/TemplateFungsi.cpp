#include <iostream>
using namespace std;

//membuat template tipe data apapun untuk type data parameter fungsi secara otomatis
template<typename T>
void print(T nilai){
    cout << nilai << endl;
}

//membuat return dari process fungsi(argument) apapun dicasting ke tipe data int
template<typename T>
int printReturn(T a){
    return a;
}


int main(){

    print(20);
    cout << printReturn(5.324) << endl;
}

/*
Temlate adalah representasi dari casting sebuah function untuk merubah hasilnya ke tipe data yang digunakan <double>
Template membuat sebuah casting template yang bisa langsung digunakan di tipe data pada fungsi yang ada(membuat alias pada tipe data apapun yang ada difungsi untuk secara otomatis juga menggunakan tipe data apapun)
*/