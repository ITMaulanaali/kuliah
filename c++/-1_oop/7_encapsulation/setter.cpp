#include <iostream>
#include <string>
#include <array>
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

        //setter
        void pindahAgama(string gantiNama){
            if(gantiNama == "achmad" || gantiNama == "Achmad"){
                this->nama = gantiNama + " " + this->nama;
                cout << "namamu islam" << endl;
            }else{
                this->nama = gantiNama;
            }
        }

        void pindahJurusan(string pelajaran, int nilaiTertinggi){
            if(nilaiTertinggi >=95){
                this->jurusan = pelajaran;
                cout << "karena nilai di matkul " << this->jurusan << " bagus, maka kamu ganti jurusan" << endl;
            }
        }

        void dikeluarkan(int frekuensiBolos){
            if(frekuensiBolos > 5){
                this->nim = 0;
                cout << "kamu tidak punya nim, kamu dikeluarkan" << endl;
            }
        }

        array<string,3> status(){

            array<string,3> nilai;
            nilai[0] = this->nama;
            nilai[1] = this->jurusan;
            nilai[2] = this->nim;

            return nilai;
        }

};

int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI", 412);

    cout << "menampilkan status default: " << endl;
    for(int i=0; i<=2; i++){
        cout << lana->status()[i] << endl;
    }
    cout << endl;

    lana->pindahAgama("achmad");
    lana->dikeluarkan(6);
    lana->pindahJurusan("matematikan", 96);

    cout << endl;
    cout << "menampilkan status saat ini: " << endl;
    for(int i=0; i<=2; i++){
        cout << lana->status()[i] << endl;
    }

    cin.get();
    return 0;
}

/*
Setter sebenarnya lebih mirip disebut fungsi yang membuat proses atau langkah kerja yang akan merubah nilai atribut dari entitas object class jika mendapatkan suatu argument tertentu
*/