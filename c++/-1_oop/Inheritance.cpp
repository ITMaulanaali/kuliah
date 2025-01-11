#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;

    public:
        Mahasiswa(const char* nama, const char* jurusan, int nim){
            this->nama = nama;
            this->jurusan = jurusan;
            this->nim = nim;
        }

        void outData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }
};

//class ini mewarisi atribut dan fungsi
class MahasiswaKampusLain : public Mahasiswa{
    public:
        MahasiswaKampusLain(const char* nama, const char* jurusan, int nim) : Mahasiswa(nama,jurusan,nim){
            
        }
};

int main(){

    Mahasiswa lana("lana","TI",412);
    lana.outData();

    cout << endl;
    
    MahasiswaKampusLain rangga("rangga","tkr",123);
    rangga.outData();

    cin.get();
    return 0;
}