#include <iostream>
using namespace std;

void luasPersegiPanjang(int nilaiA, int nilaiB = 2){
    int hasil = nilaiA * nilaiB;
    cout << "Hasil luas sisinya persegi panjang adalah: " << hasil << endl;
}
int main(){

    luasPersegiPanjang(3);

    cin.get();
    return 0;
}

/*
Default argumen secara sederhana hanyalah sebuah fungsi yang memiliki nilai default di parameternya.
Syarat atau aturan pemberia default parameter harus berada di paling akhir parameter
*/