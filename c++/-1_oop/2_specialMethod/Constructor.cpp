#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;

    public:
        //constructor
        Mahasiswa(string nama, string jurusan, int nimMahasiswa){
            Mahasiswa::nama = nama;
            Mahasiswa::jurusan = jurusan;
            this->nim = nimMahasiswa;
        }

        void tampilkanData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }
};

int main(){

    Mahasiswa lana("lana", "TI", 412);
    lana.tampilkanData();

    cin.get();
    return 0;
}

/*
Nama fungsi khusus Constructor adalah nama dari class itu sendiri.
Constructor akan dijalankan pertama kali ketika membuat atau instansiasi sebuah objecr dari class yang memiliki constructor tersebut
*/