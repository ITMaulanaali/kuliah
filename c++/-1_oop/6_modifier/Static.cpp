#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;

    public:
        static int nim;
    
    public:
        Mahasiswa(string nama, string jurusan, int nim){
            this->nama = nama;
            this->jurusan = jurusan;
            this->nim = nim;
        }

        static void tampilkanNimStatic(){
            cout << Mahasiswa::nim << endl;
        }
};

int Mahasiswa::nim = 10;

int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI",111);
    Mahasiswa rangga = Mahasiswa("rangga","tkr",222);
    
    cout << Mahasiswa::nim << endl;
    lana->tampilkanNimStatic();
    rangga.tampilkanNimStatic();

    delete lana;
    cin.get();
    return 0;
}

/*
static digunakan untuk memasukan nilai static yang menempel pada si class itu sendiri.
Fungsi/method yang menggunakan static semua statementnya harus menggunakan nilai atribut dari static
*/