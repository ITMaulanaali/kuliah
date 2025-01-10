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
            this->nim = 412;
        }

        void outData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }

        ~Mahasiswa(){
            cout << "object " << this->nama << " telah merealise alokasi memorynya" << endl;
        }
};

Mahasiswa* createHeapObjectMahasiswa(string nama, string jurusan, int nim){
    return new Mahasiswa(nama,jurusan,nim);
}

int main(){

    Mahasiswa* lana = createHeapObjectMahasiswa("lana","TI",412);
    lana->outData();
    delete lana;

    cin.get();
    return 0;
}