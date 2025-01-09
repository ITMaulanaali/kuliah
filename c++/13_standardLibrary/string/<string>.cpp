#include <iostream>
#include <string>
using namespace std;

string kata("aku dan kamu");

int main(){

    string kata1("halo");
    cout << kata << endl;
    kata1 = "hai maksudnya";
    cout << kata << endl;

    cout << endl;
    //mengambil satu huruf berdasarkan index
    cout << kata[0] << endl;
    cout << kata[1] << endl;
    cout << kata[2] << endl;

    cout << endl;
    //menyambungkan string ke dua
    string kata2("kawan");
    cout << kata2.append(kata) << endl;

    cout << endl;
    //mencari lokasi(index) nilai string pada object string
    cout << kata.find("dan") << endl;

    cout << endl;
    //akses substring berdasarkan index
    string kata3("aku dan kamu");
    cout << kata3.substr(4, 3) << endl;

    cout << endl;
    //mengganti atau mengswitch nilai string antar 2 object string
    cout << kata3 << endl;
    cout << kata2 << endl;
    kata3.swap(kata2);
    cout << kata3 << endl;
    cout << kata2 << endl;

    cout << endl;
    //mengreplace suatu kata nilai string dengan kata lain
    cout << kata.replace(4,3,"dengan") << endl;

    //menginsert kata ditengah tengah string
    cout << kata.insert(3,", dia ") << endl;

    cin.get();
    return 0;
}