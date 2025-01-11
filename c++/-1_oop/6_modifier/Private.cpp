#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;

        void tampilkanDataPrivate(){
            cout << "ini data private" << endl;
        }
};

int main(){

    Mahasiswa lana;

    cin.get();
    return 0;
}

/*
Tidak dapat mengakses apapun di modifier private melalui object. Karena private hanya dapat diakses oleh atau didalam class itu sendiri
*/