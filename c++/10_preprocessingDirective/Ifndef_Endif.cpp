#include <iostream>

//Percabangan jika MAKRO belum atau tidak didefinisikan
#ifndef MAKRO
#define MAKRO "makro dari ifndef"
#endif

using namespace std;


int main(){

    cout << MAKRO << endl;

    cin.get();
    return 0;
}