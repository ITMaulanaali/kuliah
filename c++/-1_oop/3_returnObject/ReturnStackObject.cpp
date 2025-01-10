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

Mahasiswa createStackObjectMahasiswa(string nama, string jurusan, int nim){
    return Mahasiswa(nama,jurusan,nim);
}

int main(){

    Mahasiswa lana = createStackObjectMahasiswa("lana","TI",412);
    lana.outData();

    cin.get();
    return 0;
}