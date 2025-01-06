#include <iostream>
using namespace std;

int main(){

    cout << "Tanpa karakter khusus apapun:\t"<< "Hello World" << endl << endl;
    cout << "Dengan karakter 'Newline':\t" << "Hello\nWorld" << endl << endl;
    cout << "Dengan karakter 'Tab Horizontal':\t" << "Hello\tWorld" << endl << endl;
    cout << "Dengan karakter 'Carriage Return':\t" << "Hello\rWorld" << endl << endl;
    cout << "Dengan karakter 'Backspace':\t\t" << "Hello\bWorld" << endl << endl;
    cout << "Dengan karakter 'Form Feed':\t\t" << "Hello\fWorld" << endl << endl;
    cout << "Dengan karakter 'Vertical Tab':\t\t" << "Hello\vWorld" << endl << endl;
    cout << "Dengan karakter 'Backslash':\t\t" << "Hello\\World" << endl << endl;
    cout << "Dengan karakter 'Single Quote':\t\t" << "Hello\'World" << endl << endl;
    cout << "Dengan karakter 'Double Quote':\t\t" << "Hello\"World" << endl << endl;
    cout << "Dengan karakter 'Alert':\t\t" << "Hello\aWorld" << endl << endl;
    cout << "Dengan karakter 'Null Character':\t\t" << "Hello\0World" << endl << endl;
    cout << "Dengan karakter 'Hexadecimal Escape Sequence':\t" << "Hello\x41World" << endl << endl;
    cout << "Dengan karakter 'Unicode Escape Sequence16bit':\t" << "Hello\u00A9World" << endl << endl;
    cout << "Dengan karakter 'Unicode Escape Sequence32bit':\t" << "Hello\U0001F600World" << endl << endl;

    cin.get();
    return 0;
}

/*
Ini adalah perintah dasar untuk memasukan dan menampilkan data ke console yang terhubung dengan program c++ kita.
Terdapat karakter khusus yang biasa digunakan ketika akan menampilkan sesuatu ke console yaitu:

\n      untuk enter
\t      untuk tab
\r      untuk mengembalikan kata setelah di awal
\b      untuk menghapus kata sebelumnya
\f      jarang digunakan untuk membuat enter seperti paragraf baru
\v      jarang digunakan hampir miri dengan \f
\\      untuk membuat huruf \ itu sendiri
\'      untuk membuat huruf ' itu sendiri
\"      untuk membuat huruf " itu sendiri
\a      untuk mengaktifkan suara beep ketika hasil kata dibuka
\0      jarang digunakan untuk membuat null character. Semua kata setelah null character akan hilang karena didefinisikan tidak ada (null)
\x      untuk membuat kata ASCII dari kode hexadecimal
\u      untuk membuat simbol ASCII
\U      untuk membuat simbol emote
*/