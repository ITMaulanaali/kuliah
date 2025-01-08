#include <iostream>
using namespace std;

#define HALO "Selamat pagi"

int main(){

    cout << HALO << endl;

    cin.get();
    return 0;
}

/*
Macro define digunakan untuk mengganti mengganti nilai dengan dirinya(bukan menampung)
Sehingga tidak ada alokasi memory yang digunakan

untuk menghilangkan define HALO gunakan
#undef HALO
*/