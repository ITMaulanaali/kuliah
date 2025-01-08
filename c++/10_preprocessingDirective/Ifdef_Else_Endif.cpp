#include <iostream>
#define MAKRO "benar"

//percabangan jika MAKRO sudah didefine
#ifdef MAKRO
#define DEF "benar ini makro lama"
#else
#define DEF "tidak ini makro baru"
#endif

using namespace std;

int main(){

    cout << DEF << endl;

    cin.get();
    return 0;
}