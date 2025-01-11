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

        //tidak bisa dimodifier const karena fungsinya memuat perubahan nilai
        void setName(string nama) {
            this->nama = nama;
        }

        //menampilkan dengan const
        void outDataConst() const{
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }

        //menampilkan tanpa const
        void outData(){
            cout << this->nama << endl;
            cout << this->jurusan << endl;
            cout << this->nim << endl;
        }        
};

int main(){

    const Mahasiswa* lanaConst = new Mahasiswa("lana Const Modifier","TI",412);

    // //tidak bisa dipanggil karena object lana diinstansiansi const sehingga hanya function dengan modifier const yang bisa dipanggil
    // lanaConst->setName("rangga");
    // lanaConst.outData();
    lanaConst->outDataConst();
    delete lanaConst;

    cout << endl;

    Mahasiswa* lana = new Mahasiswa("lana tanpa const","TI",412);
    lana->outData();
    lana->setName("rangga setelah dirubah dan panggil dengan fungsi const");
    lana->outDataConst();
    delete lana;

    cin.get();
    return 0;
}

/*
modifier const di fungsi pada class akan membuat semua isi dibodynya tidak boleh ada statement yang melakukan perubahan data pada data class/object

object di c++ dapat diinstansiasi sebagai const ataupun tanpa const.
object dengan const hanya bisa mengakses fungsi yang modifier const
object tanpa const dapat mengakses semua fungsi seperti biasa, baik modifier const ataupun tidak
*/