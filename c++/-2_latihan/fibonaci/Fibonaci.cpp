#include <iostream>
using namespace std;

int main(){

    int banyakFibonacci = 8;
    int nilai = 1, hasil = 1, hasilSebelumnya = 1;

    for(int i = 0; i < banyakFibonacci; i++){

        cout << nilai << endl;

        nilai = nilai + hasilSebelumnya;


    }

    // 1 1 2 3 5 8 13

    //2    = 1    + 1
    //h(2) = h(1) + h(1)

    //2    = 2             + 1         = 3
    //h(3) = h(2)          + h(1)      = h

    //3    = 3             + 2         = 5
    //h(5) = h(3)          + h(2)      = h

    //5    = 5             + 3         = 8
    //h(8) = h(5)          + h(3)      = h

    //8    = 8             + 5         = 13
    //h(13)= h(8)


}