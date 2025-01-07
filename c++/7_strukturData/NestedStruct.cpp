#include <iostream>
#include <string>
using namespace std;

struct dosen{
    string nama;
    string jenjang;
    string matkul;
};

struct mahasiswa{
	string nama;
	int nim;
	bool lulus;
    dosen politeknik;
};

int main(){

    //membuat instance struct
	mahasiswa maulana;

	maulana.nama = "Achmad Maulana Ali Hamzah";
	maulana.nim = 412;
	maulana.lulus = true;
    maulana.politeknik.nama = "Adi";
    maulana.politeknik.jenjang = "S2";
    maulana.politeknik.matkul = "Basis data";

    cout << maulana.nama << endl;
    cout << maulana.nim << endl;
    cout << maulana.lulus << endl;
    cout << maulana.politeknik.nama << endl;
    cout << maulana.politeknik.jenjang << endl;
    cout << maulana.politeknik.matkul << endl;

    cin.get();
    return 0;
}