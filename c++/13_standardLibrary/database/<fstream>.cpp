#include <iostream>
#include <fstream> //memiliki 3 class ofstream, ifstream, fstream gabungan

using namespace std;

void buatFileInputFile(){

    ofstream outputFile;

    //membuat/membuka file dan replace isi file
    outputFile.open("nama file1.txt", ios::out);
    outputFile << "replace lagi data 2" << endl;
    outputFile.close();

    //membuat/membuka file dan menambah(append) isi datanya
    outputFile.open("nama file2.cmd", ios::app);
    outputFile << "tambah datanya1" << endl;
    outputFile.close();
}

void aksesFile(){

    ifstream aksesFile;
    string dataFile, buffer;

    aksesFile.open("0_Pendahuluan.txt");
    while(!aksesFile.eof()){
        getline(aksesFile, buffer);

        dataFile.append(buffer + "\n");
    }
    cout << dataFile << endl;
    aksesFile.close();
} 
    

int main(){

    aksesFile();

    cin.get();
    return 0;
}

/*
Sesuai dengan aturan komputer bahwa processor atau cpu hanya berkomunikasi data dengan ram. itu artinya perihperal apapun yang ingin diprocesing kemudian di jadikan output
baik dari ethernet hingga storage file. Datanya harus disimpan dulu atau dimasukan dulu ke RAM atau memory. Itulah kenapa pada program kita ini tidak bisa langsung print hasil di storage melainkan dari data storage file ini harus di simpan ke memory kemudian memory itu baru diakses dengan program untuk jadi output

Intinya, program digunakan untuk mengatur bagaimana cara cpu memprocessing (process). Nah proses processing itu seperti menampilkan ke console diolah dengan data apapun yang ada di ram/memory variable
*/