#include <iostream>
using namespace std;

void segitigaKaki(int n){

    for(int i=1; i<=n; i++){

        for(int k=1; k<i; k++){
            cout << " ";
        }

        for(int o=n; o>=i; o--){
            cout << "*";
        }

        for(int k=n; k>i; k--){
            cout << "*";
        }
        cout << endl;
    }
}

void tambahin(int n){

    for(int i=1; i<=n; i++){

        for(int k=n; k>i; k--){
            cout << " ";
        }

        for(int o=1; o<=i; o++){
            cout << "*";
        }

        for(int k=1; k<i; k++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){

    segitigaKaki(5);
    cout << endl;
    tambahin(5);
}

/*
    *    
   ***   
  *****  
 *******
*********

*/

/*
Pada pencarian rumus matematika itu bermula dari pola dasar. Mencari pola dan menganalisis untuk mendapatkan hasil bintang.
Hal paling mudah dan memang sering dilakukan adalah dengan menggabungkan dasar dasar yang ada. Yang sudah builtin menjadi satu seperti bintang siku-siku sebelumnya yang digabung menjadi segitiga sama kaki

Namun ada seorang penganalisa yang ingin mencoba menguak atau reverse atau code langsung berdasarkan nalarnya sendiri dari awal. Ini mungkin cukup susah dan lama karena memulai dair 0 sedangkan daya bernalarnya mungkin tidak sampai dan berpola tinggi
Seperti fungsi segitiga yang saya buat langsung itu cukup sukar padahal antara program satu dengan yang lain itu beda sedikit namun tidak ketahuan cukup lama. dinalar namun dapat dengan mudah menggabungkan program rumus siku siku sebelumnya di fungsi tambahan

kita bisa saja cukup menggabungkan bagian bagian siku siku kemudian membaca pola segitiga sama kaki yang sudah jadi dan menganalisi perbedaanya dengan fungsi segitiga yang langsung dibuat. Dengan begitu pembelajaran matematik akan lebih cepat dan efisien


BUKAN TENTANG SEBERAPA TAJAM DAN CEPAT, TAPI SEBERAPA KREATIF UNTUK MENYELESAIKAN MASALAH
*/