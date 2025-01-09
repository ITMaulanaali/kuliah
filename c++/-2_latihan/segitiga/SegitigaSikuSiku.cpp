#include <iostream>
using namespace std;

void segitigaSikuSiku1(int n){

    for(int i=1; i<=n; i++){
        cout << "*";

        for(int k=1; k<i; k++){
            cout << "*";
        }

        cout << endl;
    }
}

void segitigaSikuSiku2(int n){

    for(int i=1; i<=n; i++){
        cout << "*";
        
        for(int k=n; k>i; k--){
            cout << "*";
        }

        cout << endl;
    }
}

void segitigaSikuSiku3(int n){

    for(int i=1; i<=n; i++){

        for(int o=i; o>1; o--){
            cout << " ";
        }

        for(int k=n; k>=i; k--){
            cout << "*";
        }
        
        cout << endl;
    }
}

void segitigaSikuSiku4(int n){

    for(int i=1; i<=n; i++){
        
        for(int k=n; k>i; k--){
            cout << " ";
        }

        for(int o=1; o<=i; o++){
            cout << "*";
        }

        cout << endl;
    }
}


int main(){

    segitigaSikuSiku1(5);
    cout << endl;
    segitigaSikuSiku2(5);
    cout << endl;
    segitigaSikuSiku3(5);
    cout << endl;
    segitigaSikuSiku4(5);
}

/*
Setiap orang bebas dalam bernalar dan mengatur flow programnya oleh karena itu jangan terpatok pada harusnya dan kesamaan code tapi pada flow programnya yang disesuaikan dengan nalar masing masing.
Namun beda cerita jika kita membaca code program orang lain. Ini akan melatih cara berpikir yang lebih luas.

Selain itu sudah jelas bahwa komputer dapat melakukan pemrosesan flow dengan cepat dan sesuai urutan logikanya. Namun tidak apa jika manusia cukup lama dalam menyelesaikan pembacaan alur logikanya

pada tahapanya memang lebih baik cek satu persatu setiap jalur apakah benar. Namun akan lebih baik lagi jika kita sudah menyiapkan teorinya dengan matang lebih awal karena selalin pemahaman akan rumus meningkat. Tingkat keberhasilan try and error juga lebih cepat dan mudah karena merujuk pada teori yang kuat

*/