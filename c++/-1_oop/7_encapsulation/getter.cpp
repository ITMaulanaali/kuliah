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

        //getter
        string getNama(){
            return this->nama;
        }

        string getJurusan(){
            return this->jurusan;
        }

        int getNim(){
            return this->nim;
        }

};

int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI", 412);
    
    cout << lana->getNama() << endl;
    cout << lana->getJurusan() << endl;
    cout << lana->getNim() << endl;

    cin.get();
    return 0;
}