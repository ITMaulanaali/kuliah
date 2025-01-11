#include <iostream>
using namespace std;

#include "Mahasiswa.h"

int main(){

    Mahasiswa* lana = new Mahasiswa("lana","TI",412);
    lana->outData();
    delete lana;

    cin.get();
    return 0;
}