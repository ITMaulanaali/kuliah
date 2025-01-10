#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;
        string hobi;

    public:
        Mahasiswa(string nama){
            this->nama = nama;
        }

        void setDataJurusan(string jurusan){
            this->jurusan = jurusan;
        }

        void setDataNim(int nim){
            Mahasiswa::nim = nim;
        }

        void outData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }

    protected:
        string hobiMahasiswa(string hobi){
            this->hobi = hobi;
            string proses = this->nama + " memiliki hobi: " + this->hobi;
            return proses;
        }
};

int main(){

    //menyimpan object di heap memory, sehingga ketika selesai di proses atau digunakan harus release alokasi memory secara manual dengan fitur delete
    Mahasiswa* lana = new Mahasiswa("lana");
    lana->setDataJurusan("TI");
    lana->outData();
    delete lana;

    //tidak dapat digunakan karena protected
    // lana.hobiMahasiswa();

    //menyimpan object di stack memory, sehingga alokasi memory akan di release otomatis setelah program object selesai di scopenya{} dalam hal ini release setelah melewati int main()
    Mahasiswa rangga = Mahasiswa("rangga");
    rangga.setDataJurusan("Otomotif");
    rangga.setDataNim(413);
    rangga.outData();

    cin.get();
    return 0;
}

/*
Contoh syntax sangat dasar umum sekali terkait class di c++.
Ada perbedaan modifier protected di c++ hanya benar benar bisa diakses oleh clasnya sendiri dan hanya kelas turunannya
sedangkan di java protected masih dapat diakses pada class di package yang sama.

Yang membatasi scope modifier protected c++ adalah si class itu sendiri
namun di Java adalah package itu sendiri.

Mahasiswa:: dan this-> mempresentasikan class itu sendiri
Mahasiswa:: adalah namespace
this-> adalah pointer khusus //sebagai dereferencing untuk merujuk pada object pointer atau class itu sendiri untuk atribut

Yang semuanya mengarah ke class itu sendiri


Mahasiswa* object = new Mahasiswa();    //menyimpan object di heap memory
Mahasiswa* object;                      //menyimpan object di heap memory
object = new Mahasiswa();               //menyimpan object di heap memory dan assign constructor baru

Mahasiswa object = Mahasiswa();         //menyimpan object di stack dan harus langsung di instansiasi untuk constructornya
Mahasiswa object("nilaiArgument");      //menyimpan object di stack dan harus langsung di instansiasi untuk constructornya
Mahasiswa object;                       //menyimpan object di stack dan harus langsung di instansiasi untuk constructornya
*/