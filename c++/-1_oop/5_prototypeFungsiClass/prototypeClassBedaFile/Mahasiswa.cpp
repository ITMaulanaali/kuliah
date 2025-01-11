#include <iostream>
#include "Mahasiswa.h"

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