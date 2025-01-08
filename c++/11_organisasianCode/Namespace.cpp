#include <iostream>
using namespace std;

namespace lanaLib{
    
    void halo(string literal){
        cout << literal << endl;
    }

}

int main(){

    lanaLib::halo("pagii");

    cin.get();
    return 0;
}

/*
namespace dapat digunakan mirip seperti class namun tanpa membuat object
tujuan dari type data namespace adalah untuk pengorganisasia data dengan memberikan tanda "lanaLib";

selain itu ini juga membuat kode tidak gampang error karena mungkin saja ketika kita membuat fungsi ternyata memiliki nama hingga parameter yang sama dengan file header yang kita include
*/