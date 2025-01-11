#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        string jurusan;
        int nim;

        void tampilkanDataPublic(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }
};

int main(){

    Mahasiswa lana;

    lana.nama = "lana";
    lana.jurusan = "TI";
    lana.nim = 412;
    lana.tampilkanDataPublic();

    cin.get();
    return 0;
}

/*
dapat mengakses apapun di modifier public secara langsung dari object dan dari dalam class itu sendiri.
*/