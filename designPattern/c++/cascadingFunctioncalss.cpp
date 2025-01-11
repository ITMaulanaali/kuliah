#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;

    public:
        Mahasiswa(string nama, string jurusan, int nim){
            this->nama = nama;
            this->jurusan = jurusan;
            this->nim = nim;
        }

        Mahasiswa& setNama(const char* nama){
            this->nama = nama;
            return (*this);
        }

        Mahasiswa& setJurusan(const char* jurusan){
            this->jurusan = jurusan;
            return (*this);
        }

        Mahasiswa& setNim(int nim){
            this->nim = nim;
            return (*this);
        }

        void outData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }
};

int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI",412);

    lana->setNama("rangga").setJurusan("otomotif").setNim(111);
    lana->outData();

    cin.get();
    return 0;
}