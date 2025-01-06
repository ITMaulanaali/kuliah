#include <iostream>
using namespace std;

int main(){

    float f = 24.1f;
    double d = 24.10;

    cout << "Float  " << sizeof(f) << "Byte" << " Nilai: " << f << endl;
    cout << "Double " << sizeof(d) << "Byte" << " Nilai: " << d << endl;
    cin.get();
    return 0;
}

/*
Tipe data float dan double adalah tipe data yang dapat menampung bilangan atau nilai berkoma(,). Namun untuk menginisialisasi nilai berkoma di program c++ secara langsung harus menggunakan titik sebagai pengganti koma(.)
By default nilai decimal apapun yang diinisialisasi akan menggunakan double sehingga diberikan pembeda untuk type data float dengan huruf 'f' dibelakang nilai

float   4Byte
double  8Byte
*/