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

        friend void showStatus(const Mahasiswa&);
};

//dapat mengakses data member private dan protected di class yang mendeklarasikan friend fungsinya(Mahasiswa)
void showStatus(const Mahasiswa& objectMahasiswa){
    cout << objectMahasiswa.nama << endl;
    cout << objectMahasiswa.jurusan << endl;
    cout << objectMahasiswa.nim << endl;
}


int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI",412);
    showStatus(*lana);
    delete lana;

    cin.get();
    return 0;
}

/*
    Friend berguna dan memang digunakan untuk mengakses atribut ataupun funtion yang bermodifier private dan protected. Namun anehnya untuk public ternyata bisa diakses dengan menambahkan di parameter const?

    prototype fungsi yang didefinisikan sebagai friend di class Mahasiswa. Deklarasi prototypenya bisa untuk memanggil atau mengakses sih atribut private classnya.
    Ini mirip seperti getter namun fungsi getternya tidak menjadi bagian dari class tersebut.
*/