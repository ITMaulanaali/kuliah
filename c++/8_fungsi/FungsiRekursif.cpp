#include <iostream>
using namespace std;

//ini akan terus mengreturn nilai a kemudian selalu dijumlahkan dengan a lagi hingga b-- (artinya tidak terhenti) yang justru akan menghasilkan segmention fault
int penjumlahanRekursif(int a, int b){
    return a + penjumlahanRekursif(a,b-1);
}

int perkalianFibonacciRekursif(int a, int b){
    if(b==0){
        return a;
    }else{
        return a * perkalianFibonacciRekursif(a,--b);
    }
}

int main(){

    // penjumlahanRekursif(2,3);
    cout << perkalianFibonacciRekursif(2,3) << endl;
}

/*
Secara sederhana, rekursif adalah mengulang dirinya sendiri
Artinya sebuah fungsi yang memanggil dirinya sendiri

selain itu pemberian argument pengurangan b harus b-1 karena b-- itu pada pemanggilan rekursif selanjutnya tidak akan berkurang
*/