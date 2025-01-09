#include <iostream>
#include <fstream> //memiliki 3 class ofstream, ifstream, fstream gabungan

using namespace std;

int main(){

    ofstream outputFile;

    //membuat/membuka file dan replace isi file
    outputFile.open("nama file1.txt", ios::out);
    outputFile << "replace lagi data 2" << endl;
    outputFile.close();

    //membuat/membuka file dan menambah(append) isi datanya
    outputFile.open("nama file2.cmd", ios::app);
    outputFile << "tambah datanya1" << endl;
    outputFile.close();

    cin.get();
    return 0;
}