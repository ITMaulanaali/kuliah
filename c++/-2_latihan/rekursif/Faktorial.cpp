#include <iostream>
using namespace std;

int faktorial(int banyakFaktorial){

    if(banyakFaktorial <= 1){
        return banyakFaktorial;
    }else{
        return banyakFaktorial * faktorial(banyakFaktorial - 1);
    }
}

int main(){

    cout << faktorial(5) << endl;

    cin.get();
    return 0;
}

/*
Harap untuk lebih baik benar benar memahami atau sudah membuat rancangan flow yang akan dibuat kemudian implementasi dari pada mencoba langsung dan test satu satu
*/