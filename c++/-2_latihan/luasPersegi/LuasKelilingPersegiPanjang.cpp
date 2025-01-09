#include <iostream>
using namespace std;

double luasPersegiPanjang(double p, double l, double t){
    return p*l*t;
}

void kelilingPersegiPanjang(double p, double l, double t){
    cout << p+l+t << endl;
}

int main(){

    cout << luasPersegiPanjang(2,2,3) << endl;
    kelilingPersegiPanjang(2,2,3);

    cin.get();
    return 0;
}