#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        string nama;
        string jurusan;
        int nim;

    public:
        //prototype fungsi
        Mahasiswa(string, string, int);
        ~Mahasiswa();
        void outData();

};

int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI",412);
    lana->outData();
    delete lana;

    cin.get();
    return 0;
}

//penjabaran protype fungsi
Mahasiswa::Mahasiswa(string nama, string jurusan, int nim){
    this->nama = nama;
    this->jurusan = jurusan;
    this->nim = nim;
}

void Mahasiswa::outData(){
    cout << this->nama << endl;
    cout << this->jurusan << endl;
    cout << this->nim << endl;
}

Mahasiswa::~Mahasiswa(){
    cout << "object " << this->nama << "telah release" << endl;
}

/*
Prototype fungsi ini cukup menarik karena bisa membuat prototype diluar scope class. lalu sebenarnya untuk apa?

Padahal penggunaan class sendiri adalah memang untuk mengelompokan si fungsi dengan variable atau atributnya,
jika di buat prototype di luar scopenya meskipun secara konsep masih dalam kelompok class. Ini akan tetap membuat campuran code tumpah ke yang lain dan pembacaannya tercampur. Meskipun memang dari sisi compiler akan tetap melakukan linking sesuai fungsi scopenya
Namun akan menjadi bagus jika kita pisah filenya dengan nama yang sesuai penempatan antara prototypenya dan penjabarannya dengan menekankan include, akan memudahkan dalam penambahan fitur dan pembacaan codenya rapi
*/