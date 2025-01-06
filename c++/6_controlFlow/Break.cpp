#include <iostream>
using namespace std;

int main(){

    int a = 5;

    while(true){
        a++;
        cout << a << endl;
        if(a == 20){
            break;
        }
    }
}

/*
Break secara sederhana adalah menghentikan secara paksa. Digunakan untuk menghentikan iterasi dari looping
Break hanya akan menghentikan iterasi di looping atau di blok tersebut dan melanjutkan ke blok selanjutnya. Jika blok atau aksi selanjutnya adalah looping maka itu akan terlooping kembali
*/