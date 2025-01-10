#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama = "lana";
        string jurusan = "TI";
        int nim = 412;

    public:
        void tampilkanData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }

        //destructor
        ~Mahasiswa(){
            cout << "object ini sudah otomatis dihapus dari stack memory ketika keluar scope (release alokasi memory object ini)" << endl;
        }
};

int main(){

    Mahasiswa lana;
    lana.tampilkanData();

    cin.get();
    return 0;
}

/*
Nama fungsi khusus Destructor adalah nama dari class itu sendiri.
Destructor akan dijalankan ketika hasil instansiasi (sebuah object dari class yang memiliki destructor) akan dihapus/release alokasi memory stacknya di proses berikutnya
*/