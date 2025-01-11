#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;

    protected:
        int nim;

    public:
        Mahasiswa(string nama, string jurusan, int nim){
            this->nama = nama;
            this->jurusan = jurusan;
            this->nim = nim;
        }

        void halo(){
            cout << "hai" << endl;
        }

        friend class Dosen;
};

class Dosen{
    public:
        void showStatus(Mahasiswa& objectMahasiswa){
            cout << objectMahasiswa.nama << endl;
            cout << objectMahasiswa.jurusan << endl;
            cout << objectMahasiswa.nim << endl;
        }
};


int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI",412);
    
    Dosen* adi;
    adi->showStatus(*lana);

    delete lana;
    delete adi;
    cin.get();
    return 0;
}

/*
    Friend berguna dan memang digunakan untuk mengakses atribut ataupun funtion yang bermodifier private dan protected. Namun anehnya untuk public ternyata bisa diakses dengan menambahkan di parameter const?

    Friend class mirip seperti friend fungsi. Bedanya kita tidak mendefinisikan prototype dengan nama fungsi tapi nama class
    yang nntinya semua method atau fungsi dengan nama bermacam-macam di class Dosen yang mendapatkan friend akan bisa memiliki staement untuk mengakses sih atribut private dan protected di class Mahasiswa

    prototype fungsi yang didefinisikan sebagai friend di class Mahasiswa. Deklarasi prototypenya bisa untuk memanggil atau mengakses sih atribut private classnya.
    Ini mirip seperti getter namun fungsi getternya milik class lain.
*/